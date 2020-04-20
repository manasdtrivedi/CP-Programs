#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, n, i;
	long long int p[100000], profit;
	cin >> t;
	while(t--){
		profit = 0;
		cin >> n;
		for(i = 0; i < n; i++){
			cin >> p[i];
		}
		sort(p, p + n, greater<long long int>());
		for(i = 0; i < n; i++){
			if(p[i] - i > 0){
				profit += (p[i] - i) % 1000000007;
			}
		}
		profit %= 1000000007;
		cout << profit << endl;
	}
	return 0;
}