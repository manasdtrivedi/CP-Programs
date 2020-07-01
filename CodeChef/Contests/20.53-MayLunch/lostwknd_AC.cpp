#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, p, total, a, i;
  cin >> t;
  while(t--){
    total = 0;
    for(i = 0; i < 5; i++){
      cin >> a;
      total += a;
    }
    cin >> p;
    total = total * p;
    if(total > 120){
      cout << "Yes" << endl;
    }
    else{
      cout << "No" << endl;
    }
  }
}
