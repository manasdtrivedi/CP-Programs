#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n, a[1000], i, j, totalAl, totalBob, noOfMoves, grandTotalAl, grandTotalBob;
  bool turnOfAl;
  scanf("%d", &t);
  while(t--){
    scanf("%d", &n);
    for(i = 0; i < n; i++){
      scanf("%d", &a[i]);
    }
    i = 0;
    j = n - 1;
    totalAl = 0;
    totalBob = 0;
    grandTotalAl = 0;
    grandTotalBob = 0;
    noOfMoves = 0;
    turnOfAl = true;
    while(i <= j){
      if(turnOfAl){
        totalAl += a[i];
        grandTotalAl += a[i];
        i++;
        //printf("totalAl is now %d, i is %d, j is %d\n", totalAl, i, j);
        if(totalAl > totalBob){
          turnOfAl = false;
          totalBob = 0;
          noOfMoves++;
          //printf("\nAl's move just got over.\n\n");
          continue;
        }
        if(i > j)
          noOfMoves++;
      }
      else{
        totalBob += a[j];
        grandTotalBob += a[j];
        j--;
        //printf("totalBob is now %d, i is %d, j is %d\n", totalBob, i, j);
        if(totalBob > totalAl){
          turnOfAl = true;
          totalAl = 0;
          noOfMoves++;
          //printf("\nBob's move just got over.\n\n");
          continue;
        }
        if(i > j)
          noOfMoves++;
      }
    }
    printf("%d %d %d\n", noOfMoves, grandTotalAl, grandTotalBob);
  }
  return 0;
}
