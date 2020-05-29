#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, x, n, m, i;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d%d", &x, &n, &m);
		if(x >= 20){
			for(i = 0; i < n; i++){
				x = x / 2 + 10;
			}
		}
		for(i = 0; i < m; i++){
			x = x - 10;
		}
		if(x > 0)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}