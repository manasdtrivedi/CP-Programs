#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n, i;
  scanf("%d", &t);
  while(t--){
    scanf("%d", &n);
    if(n == 2 || n == 3){
      printf("%d", -1);
    }
    else if(n == 4){
      printf("%d %d %d %d", 3, 1, 4, 2);
    }
    else if(n == 5){
      printf("%d %d %d %d %d", 1, 4, 2, 5, 3);
    }
    else if(n % 3 == 2){
      printf("%d ", 1);
      for(i = 3; i <= n - 5; i += 3){
        printf("%d ", i);
      }
      printf("%d ", n - 1);
      i -= 2;
      for(; i >= 4; i -= 3){
        printf("%d ", i);
      }
      for(i = 2; i <= n; i += 3){
        printf("%d ", i);
      }
      printf("%d", n - 2);
    }
    else{
      printf("%d ", 1);
      for(i = 3; i <= n; i += 3){
        printf("%d ", i);
      }
      i -= 5;
      for(; i >= 4; i -= 3){
        printf("%d ", i);
      }
      for(i = 2; i <= n; i += 3){
        printf("%d ", i);
      }
      if(n % 3 == 1){
        printf("%d", n);
      }
    }
    printf("\n");
  }
  return 0;
}
