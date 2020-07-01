#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long noOfCoins, S, N;
    scanf("%lld%lld", &S, &N);
    if(S <= N){
        if(S != 1){
            if(S % 2 == 0){
                printf("%d\n", 1);
            }
            else{
                printf("%d\n", 2);
            }
        }
        else{
            printf("%d\n", 1);
        }
    }
    else{
        noOfCoins = 0;
        noOfCoins = S / N;
        S -= noOfCoins * N;
        if(S != 0){
            if(S != 1){
                if(S % 2 == 0){
                    noOfCoins++;
                }
                else{
                    noOfCoins += 2;
                }
            }
            else{
                noOfCoins++;
            }
        }
        printf("%lld\n", noOfCoins);
    }
    return;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--)
		solve();
	return 0;
}