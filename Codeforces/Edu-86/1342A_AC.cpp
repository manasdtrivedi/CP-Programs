#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int t, x, y, a, b, temp, cost;
  scanf("%lld", &t);
  while(t--){
    scanf("%lld%lld", &x, &y);
    scanf("%lld%lld", &a, &b);
    if(x < y){
      temp = x;
      x = y;
      y = temp;
    }
    cost = (x - y) * a;
    if(b > a * 2)
      cost += a * 2 * y;
    else
      cost += b * y;
    printf("%lld\n", cost);
  }
  return 0;
}
