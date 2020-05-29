#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, n, a, b, c, d;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d%d%d%d", &n, &a, &b, &c, &d);
		if((((a - b) * n) > (c + d)) || (((a + b) * n) < (c - d)))
			printf("No\n");
		else
			printf("Yes\n");
	}
	return 0;
}