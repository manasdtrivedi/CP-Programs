#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n, temp, noOfDigits, noOfNonZeroDigits, i;
  scanf("%d", &t);
  while(t--){
    noOfDigits = 1;
    noOfNonZeroDigits = 0;
    scanf("%d", &n);
    temp = n;
    if(temp % 10 != 0)
      noOfNonZeroDigits++;
    while(temp /= 10){
      noOfDigits++;
      if(temp % 10 != 0)
        noOfNonZeroDigits++;
    }
    printf("%d\n", noOfNonZeroDigits);
    for(i = 0; i < noOfDigits; i++){
      temp = n % 10;
      if(temp != 0)
        printf("%d ", temp * (int)(pow(10, i) + 0.5));
      n /= 10;
    }
    printf("\n");
  }
  return 0;
}
