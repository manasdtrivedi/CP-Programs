#include<iostream>
#include<climits>

using namespace std;

int main(){
	long long int t, n, a, b, c, f, temp, ans;
	cin >> t;
	while(t--){
		ans = LLONG_MAX;
		cin >> n >> a >> b >> c;
		if(a < b){
			temp = a;
			a = b;
			b = temp;
		}
		while(n--){
			cin >> f;
			if(f >= b && f <= a){
				ans = c + a - b;
				break;
			}
			else if(f < b){
				temp = c + b - f + a - f;
				if(temp < ans)
					ans = temp;
			}
			else{
				temp = c + f - b + f - a;
				if(temp < ans)
					ans = temp;
			}
		}
		if(n > 0){
			while(n--){
				cin >> f;
			}
		}
		cout << ans << endl;
	}
	return 0;
}