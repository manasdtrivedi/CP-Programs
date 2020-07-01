#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, i, ans, possibleAns;
    int s[50];
    cin >> t;
    while(t--){
        ans = INT_MAX;
        cin >> n;
        for(i = 0; i < n; i++){
            cin >> s[i];
        }
        sort(s, s + n);
        for(i = 1; i < n; i++){
            possibleAns = s[i] > s[i - 1] ? (s[i] - s[i - 1]) : (s[i - 1] - s[i]);
            if(ans > possibleAns){
                ans = possibleAns;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}