#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n;
  scanf("%d", &t);
  while(t--){
    scanf("%d", &n);
    printf("%d\n", int(pow(2, n / 2 + 1) + 0.5) - 2);
  }
  return 0;
}
