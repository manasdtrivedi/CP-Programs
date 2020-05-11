#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n0, n1, n2, i, j, parityOfI;
  int ans[10000];
  bool useTheZeroth;
  bool useTheFirst;
  scanf("%d", &t);
  while(t--){
    useTheZeroth = false;
    useTheFirst = true;
    scanf("%d%d%d", &n0, &n1, &n2);
    for(i = 1; i <= n0 + 1; i++){
      ans[i] = 0;
    }
    if(n1 == 0)
      useTheFirst = false;
    else if(n1 % 2 == 0){
      n1--; // To make it odd.
      ans[0] = 1;
      useTheZeroth = true;
    }
    parityOfI = i % 2;
    for(j = i; j < n1 + i; j++){
      if(j % 2 == parityOfI)
        ans[j] = 1;
      else
        ans[j] = 0;
    }
    for(i = j; i < n2 + j; i++){
      ans[i] = 1;
    }
    if(useTheZeroth)
      j = 0;
    else if(useTheFirst)
      j = 1;
    else
      j = 2;
    while(j < i){
      printf("%d", ans[j]);
      j++;
    }
    if(n1 == 0 && n2 == 0)
      printf("%d", 0);
    else if(n0 == 0 && n1 == 0)
      printf("%d", 1);
    printf("\n");
  }
  return 0;
}
