#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int t, n, i;
  scanf("%lld", &t);
  while(t--){
    scanf("%lld", &n);
    if((n / 2) % 2 == 1){
      printf("NO\n");
    }
    else{
      printf("YES\n");
      for(i = 2; i <= n; i = i + 2){
        printf("%lld ", i);
      }
      for(i = 1; i < n - 2; i = i + 2){
        printf("%lld ", i);
      }
      printf("%lld\n", n + n / 2 - 1);
    }
  }
}
