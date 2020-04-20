#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, a, b, a1, a2, b1, b2, sum1, sum2, sum3;
	cin >> t;
	while(t--){
		cin >> a >> b;
		a2 = a / 10;
		a1 = a % 10;
		b2 = b / 10;
		b1 = b % 10;
		sum1 = a + b;
		if(a2 != 0){
			sum2 = (b1 + b2) * 10 + a1 + a2;
		}
		else{
			sum2 = 0;
		}
		if(b2 != 0){
			sum3 = (a1 + a2) * 10 + b1 + b2;
		}
		else{
			sum3 = 0;
		}
		sum1 = sum1 > sum2 ? sum1 : sum2;
		sum1 = sum1 > sum3 ? sum1 : sum3;
		cout << sum1 << endl;
	}
}