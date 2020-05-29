#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, a[10][10], i, j;
	scanf("%d", &t);
	while(t--){
		for(i = 1; i <= 9; i++){
			for(j = 1; j <= 9; j++){
				scanf("%1d", &a[i][j]);
			}
		}
		for(i = 1, j = 1; i <= 9; i++, j += 3){
			if(j == 10){
				j = 2;
			}
			else if(j == 11){
				j = 3;
			}
			a[i][j]++;
			if(a[i][j] == 10){
				a[i][j] = 1;
			}
		}
		for(i = 1; i <= 9; i++){
			for(j = 1; j <= 9; j++){
				printf("%d", a[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}