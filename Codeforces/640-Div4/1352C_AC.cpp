#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n, k;
  scanf("%d", &t);
  while(t--){
    scanf("%d%d", &n, &k);
    if(k % (n - 1) == 0){
      printf("%d\n", ((k / (n - 1)) * n) + (k % (n - 1)) - 1);
    }
    else{
      printf("%d\n", ((k / (n - 1)) * n) + (k % (n - 1)));
    }
  }
  return 0;
}
