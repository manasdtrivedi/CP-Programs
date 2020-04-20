#include<iostream>

using namespace std;

int main(){
	int t, n, s, v, p, ans, profit;
	cin >> t;
	while(t--){
		ans = 0;
		cin >> n;
		while(n--){
			cin >> s >> p >> v;
			s++;
			profit = (p / s) * v;
			if(profit > ans)
				ans = profit;
		}
		cout << ans << endl;
	}
	return 0;
}