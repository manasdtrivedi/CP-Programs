#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n, i, ans;
  char s[100001];
  scanf("%d", &t);
  while(t--){
    ans = 0;
    scanf("%s", s);
    n = strlen(s);
    for(i = 0; i < n - 1; i++){
      if(s[i] != s[i + 1]){
        ans++;
        i++;
      }
    }
    printf("%d\n", ans);
  }
  return 0;
}
