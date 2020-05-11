#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n, q, c, i, sizeOfQueue;
  char s;
  int freqOfChar[26];
  scanf("%d", &t);
  while(t--){
    scanf("%d%d", &n, &q);
    for(i = 0; i < 26; i++)
      freqOfChar[i] = 0;
    scanf("%c", &s); // To flush out the \n after q
    while(n--){
      scanf("%c", &s);
      freqOfChar[s - 'a']++;
    }
    while(q--){
      sizeOfQueue = 0;
      scanf("%d", &c);
      for(i = 0; i < 26; i++){
        if(freqOfChar[i] > c)
          sizeOfQueue = sizeOfQueue + (freqOfChar[i] - c);
      }
      printf("%d\n", sizeOfQueue);
    }
  }
  return 0;
}
