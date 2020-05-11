#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n, k, noOfDistinctNumbers, a, i, j;
  int freq[101];
  int ans[101];
  scanf("%d", &t);
  while(t--){
    noOfDistinctNumbers = 0;
    for(i = 0; i <= 100; i++)
      freq[i] = 0;
    scanf("%d%d", &n, &k);
    for(i = 0; i < n; i++){
      scanf("%d", &a);
      if(freq[a] == 0)
        noOfDistinctNumbers++;
      freq[a]++;
    }
    if(noOfDistinctNumbers <= k){
      j = 0;
      for(i = 0; i <= 100; i++){
        if(freq[i] > 0){
          ans[j] = i;
          j++;
        }
      }
      while(j < k){
        ans[j] = 1;
        j++;
      }
      printf("%d\n", n * k);
      for(i = 0; i < n - 1; i++){
        for(j = 0; j < k; j++){
          printf("%d ", ans[j]);
        }
      }
      for(j = 0; j < k - 1; j++){
        printf("%d ", ans[j]);
      }
      printf("%d\n", ans[j]);
    }
    else{
      printf("%d\n", -1);
    }
  }
  return 0;
}
