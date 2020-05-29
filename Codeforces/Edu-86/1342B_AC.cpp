#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, n, i;
	char msb, a[101];
	scanf("%d", &t);
	while(t--){
		scanf("%s", a);
		n = strlen(a);
		msb = a[0];
		for(i = 1; i < n; i++){
			if(msb != a[i]){
				break;
			}
		}
		if(i == n){
			printf("%s\n", a);
		}
		else{
			for(i = 0; i < n; i++){
				printf("01");
			}
			printf("\n");
		}
	}
	return 0;
}