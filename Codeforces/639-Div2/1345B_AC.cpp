#include<bits/stdc++.h>
using namespace std;

int i, ans;

int buildBiggestPyramid(int n){
  if(n == 1)
    return 0;
  i = 1;
  while(n >= 3 * i){
    n -= 3 * i;
    i++;
  }
  ans++;
  if(n >= 2 * i){
    n -= 2 * i;
    return n;
  }
  else{
    n += (i - 1);
    return n;
  }
}

int main(){
  int t, n;
  scanf("%d", &t);
  while(t--){
    ans = 0;
    scanf("%d", &n);
    do{
      n = buildBiggestPyramid(n);
    }while(n != 0);
    printf("%d\n", ans);
  }
  return 0;
}
