#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t, x, k, noOfNosInPrimFactzatn, i;
	cin >> t;
	while(t--){
		cin >> x >> k;
		noOfNosInPrimFactzatn = 0;
		while(x % 2 == 0){
			noOfNosInPrimFactzatn++;
			x /= 2;
		}
		for(i = 3; i <= sqrt(x); i = i + 2){
			while(x % i == 0){
				noOfNosInPrimFactzatn++;
				x /= i;
			}
		}
		if(x > 2)	// n at the end is a prime no. greater than 2, like 19
			noOfNosInPrimFactzatn++;
		if(noOfNosInPrimFactzatn >= k)
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}
	return 0;
}