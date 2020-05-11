#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, a1, b1, a2, b2, flag;
  scanf("%d", &t);
  while(t--){
    scanf("%d%d%d%d", &a1, &b1, &a2, &b2);
    flag = 0;
    if(a1 == a2 && a1 > b1){
      if(a1 == b1 + b2){
        flag = 1;
      }
    }
    else if(a1 == b2 && a1 > b1){
      if(a1 == b1 + a2){
        flag = 1;
      }
    }
    else if(b1 == a2 && b1 > a1){
      if(b1 == a1 + b2){
        flag = 1;
      }
    }
    else if(b1 == b2 && b1 > a1){
      if(b1 == a1 + a2){
        flag = 1;
      }
    }
    if(flag == 1)
      printf("YES\n");
    else
      printf("NO\n");
  }
  return 0;
}
