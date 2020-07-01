#include<bits/stdc++.h>

using namespace std;

int main(){

    int t, n, b, m, x, blockNo, ans;

    scanf("%d", &t);
    while(t--){
        ans = 0;
        blockNo = -1;
        scanf("%d%d%d", &n, &b, &m);
        while(m--){
            scanf("%d", &x);
            if(x / b != blockNo){
                blockNo = x / b;
                ans++;
            }
        }
        printf("%d\n", ans);
    }

}