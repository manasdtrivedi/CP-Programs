#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> intPair;
typedef pair<intPair, intPair> pairOfPairs;
int main(){
  int t, n, x, y, time, i;
  intPair pathStart;
  intPair pathEnd;
  pairOfPairs path;
  set< pairOfPairs > setOfPaths;
  char dir[100000];
  scanf("%d", &t);
  while(t--){
    scanf("%s", dir);
    n = strlen(dir);
    x = 0;
    y = 0;
    time = 0;
    for(i = 0; i < n; i++){
      switch(dir[i]){
        case 'N': pathStart = make_pair(x, y);
                  y++;
                  pathEnd = make_pair(x, y);
          break;
        case 'S': pathEnd = make_pair(x, y);
                  y--;
                  pathStart = make_pair(x, y);
          break;
        case 'W': pathEnd = make_pair(x, y);
                  x--;
                  pathStart = make_pair(x, y);
          break;
        case 'E': pathStart = make_pair(x, y);
                  x++;
                  pathEnd = make_pair(x, y);
          break;
      }
      path = make_pair(pathStart, pathEnd);
      if(setOfPaths.find(path) == setOfPaths.end()){
        setOfPaths.insert(path);
        time += 5;
      }
      else{
        time += 1;
      }
    }
    setOfPaths.clear();
    printf("%d\n", time);
  }
  return 0;
}
