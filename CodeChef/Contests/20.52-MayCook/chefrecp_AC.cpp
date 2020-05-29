#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, n, i, a, prevA, flag;
	int freq[1001];
	cin >> t;
	while(t--){
		prevA = 0;
		flag = 0;
		cin >> n;
		for(i = 0; i <= 1000; i++){
			freq[i] = 0;
		}
		for(i = 0; i < n; i++){
			cin >> a;
			if(freq[a] > 0 && a != prevA)
				flag = 1;
			freq[a]++;
			prevA = a;
		}
		if(flag == 1){
			cout << "NO" << endl;
		}
		else{
			sort(freq, freq + 1001);
			for(i = 1; i <= 1000; i++){
				if(freq[i] == freq[i - 1] && freq[i] != 0){
					flag = 1;
					break;
				}
			}
			if(flag == 1){
				cout << "NO" << endl;
			}
			else{
				cout << "YES" << endl;
			}
		}
	}
}