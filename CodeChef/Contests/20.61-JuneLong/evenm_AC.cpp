#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n, i, j, limit;
  scanf("%d", &t);
  while(t--){
    scanf("%d", &n);
    for(i = 0; i < n; i++){
      if(i % 2 == 0){
        j = i * n + 1;
        limit = (i + 1) * n;
        while(j < limit){
          printf("%d ", j);
          j++;
        }
        printf("%d\n", j);
      }
      else{
        j = (i + 1) * n;
        limit = i * n + 1;
        while(j > limit){
          printf("%d ", j);
          j--;
        }
        printf("%d\n", j);
      }
    }
  }
  return 0;
}
