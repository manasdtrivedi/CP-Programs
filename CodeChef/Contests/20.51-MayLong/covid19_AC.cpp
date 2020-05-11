#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n, x, xPrev, min, max, count;
  scanf("%d", &t);
  while(t--){
    min = INT_MAX;
    max = 0;
    scanf("%d", &n);
    scanf("%d", &xPrev);
    count = 1; // The first number i.e. xPrev
    n = n - 1; // n - 1 numbers are left to be read
    while(n--){
      scanf("%d", &x);
      if(x <= xPrev + 2){
        count++;
      }
      else{
        if(count > max)
          max = count;
        if(count < min)
          min = count;
        count = 1; // The x which was >2 spaces from xPrev
      }
      xPrev = x;
    }
    if(count > max)
      max = count;
    if(count < min)
      min = count;
    printf("%d %d\n", min, max);
  }
  return 0;
}
