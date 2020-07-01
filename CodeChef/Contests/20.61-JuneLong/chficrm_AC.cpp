#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n, a, five, ten, flag;
  scanf("%d", &t);
  while(t--){
    five = 0;
    ten = 0;
    flag = 0;
    scanf("%d", &n);
    while(n--){
      scanf("%d", &a);
      if(a == 5){
        five++;
      }
      else if(a == 10){
        if(five > 0){
          ten++;
          five--;
        }
        else{
          flag = 1;
        }
      }
      else{ // a == 15
        if(ten > 0){
          ten--;
        }
        else if(five > 1){
          five -= 2;
        }
        else{
          flag = 1;
        }
      }
    }
    if(flag == 0){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}
