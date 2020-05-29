#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, n, a, b, i, j;
	char str[2000];
	scanf("%d", &t);
	while(t--){
		scanf("%d%d%d", &n, &a, &b);
		for(i = 0; i < a - b; i++){
			str[i] = 'a';
		}
		for(j = 0; j < b; j++){
			str[i + j] = j + 97;
		}
		for(i = 0; i < n; i++){
			printf("%c", str[i % a]);
		}
		printf("\n");
	}
	return 0;
}