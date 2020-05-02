#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int t, n, q, currFloor, nextFloor, total;
  cin >> t;
  while(t--){
    cin >> n >> q;
    currFloor = 0;
    total = 0;
    while(q--){
      cin >> nextFloor;
      total = total + abs(nextFloor - currFloor);
      currFloor = nextFloor;
      cin >> nextFloor;
      total = total + abs(nextFloor - currFloor);
      currFloor = nextFloor;
    }
    cout << total << endl;
  }
}
