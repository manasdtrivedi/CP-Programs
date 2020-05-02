#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n, s, i, p[100], bin[100], minDefPrice, minForPrice;
  cin >> t;
  while(t--){
    minDefPrice = 100000;
    minForPrice = 100000;
    cin >> n >> s;
    s = 100 - s;  // Cash left
    for(i = 0; i < n; i++)
      cin >> p[i];
    for(i = 0; i < n; i++)
      cin >> bin[i];
    for(i = 0; i < n; i++){
      if(bin[i] == 0){
        if(p[i] < minDefPrice)
          minDefPrice = p[i];
      }
      else{
        if(p[i] < minForPrice)
          minForPrice = p[i];
      }
    }
    if(s >= minDefPrice + minForPrice && minForPrice != 100000 && minDefPrice != 100000)
      cout << "yes" << endl;
    else
      cout << "no" << endl;
  }
  return 0;
}
