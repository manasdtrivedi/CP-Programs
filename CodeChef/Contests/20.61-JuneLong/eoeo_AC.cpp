#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t, ts, tsTemp, twosInPrimeFactzn;
  scanf("%lld", &t);
  while(t--){
    twosInPrimeFactzn = 0;
    scanf("%lld", &ts);
    tsTemp = ts;
    while(tsTemp % 2 == 0){
      tsTemp /= 2;
      twosInPrimeFactzn++;
    }
    printf("%lld\n", ts / (int)(pow(2, (twosInPrimeFactzn + 1)) + 0.5));
  }
  return 0;
}
