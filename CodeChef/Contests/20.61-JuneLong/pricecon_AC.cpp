#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n, k, p, ans;
  scanf("%d", &t);
  while(t--){
    ans = 0;
    scanf("%d%d", &n, &k);
    while(n--){
      scanf("%d", &p);
      if(p > k){
        ans += p - k;
      }
    }
    printf("%d\n", ans);
  }
  return 0;
}
