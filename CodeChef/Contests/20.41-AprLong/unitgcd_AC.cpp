// Use scanf()/printf() instead of cin/cout to avoid TLE
#include<stdio.h>
int main(){
	int t, n, i;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		if(n == 1){
			printf("%d\n%d %d\n", 1, 1, 1);
		}
		else if(n == 2){
			printf("%d\n%d %d %d\n", 1, 2, 1, 2);
		}
		else if(n == 3){
			printf("%d\n%d %d %d %d\n", 1, 3, 1, 2, 3);
		}
		else{
			printf("%d\n", n / 2);
			printf("%d %d %d %d\n", 3, 1, 2, 3);
			for(i = 4; i < n; i += 2){
				printf("%d %d %d\n", 2, i, i + 1);
			}
			if(n % 2 == 0){
				printf("%d %d\n", 1, n);
			}
		}
	}
	return 0;
}