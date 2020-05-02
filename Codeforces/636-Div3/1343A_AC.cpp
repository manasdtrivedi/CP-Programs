#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int t, n, k;
  cin >> t;
  while(t--){
    cin >> n;
    k = 2;
    while(n % (int)(pow(2, k) - 0.5) != 0){
      k = k + 1;
    }
    cout << n / (int)(pow(2, k) - 0.5) << endl;
  }
}
