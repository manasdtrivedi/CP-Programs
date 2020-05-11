#include<stdio.h>
using namespace std;
int main(){
  int t, n, a[8000], noOfSplElements, i, j, sum;
  int sums[8001];
  scanf("%d", &t);
  while(t--){
    noOfSplElements = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
      scanf("%d", &a[i]);
    for(i = 0; i < 8001; i++)
      sums[i] = 0;
    for(i = 0; i < n - 1; i++){
      sum = a[i];
      for(j = i + 1; j < n; j++){
        sum += a[j];
        if(sum <= 8000)
          sums[sum] = 1;
      }
    }
    for(i = 0; i < n; i++){
      if(sums[a[i]] == 1)
        noOfSplElements++;
    }
    printf("%d\n", noOfSplElements);
  }
  return 0;
}
