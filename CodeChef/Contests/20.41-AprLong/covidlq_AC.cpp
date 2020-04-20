#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, n, a[100], flag, i, j;
	cin >> t;
	while(t--){
		flag = 0;
		cin >> n;
		for(i = 0; i < n; i++){
			cin >> a[i];
		}
		for(i = 0; i < n; i++){
			if(a[i] == 1){
				for(j = i + 1; j < i + 6 && j < n; j++){
					if(a[j] == 1){
						flag = 1;
						break;
					}
				}
			}
			if(flag == 1)
				break;
		}
		if(flag == 1)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	return 0;
}