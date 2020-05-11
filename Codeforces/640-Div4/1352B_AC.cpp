#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n, k, quotient, i;
  scanf("%d", &t);
  while(t--){
    scanf("%d%d", &n, &k);
    if((k % 2 == 0 && n % 2 == 1) || n < k){
      printf("NO\n");
    }
    else{
      quotient = n / k;
      if(k % 2 == 1 && n % 2 == 0 && quotient % 2 == 1)
        quotient--;
      if(k % 2 == 1 && n % 2 == 1 && quotient % 2 == 0)
        quotient--;
      if(quotient == 0)
        printf("NO\n");
      else{
        printf("YES\n");
        for(i = 0; i < k - 1; i++){
          printf("%d ", quotient);
        }
        printf("%d\n", n - quotient * (k - 1));
      }
    }
  }
  return 0;
}
