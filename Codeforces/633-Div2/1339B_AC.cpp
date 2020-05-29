#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, n, a[100000], i, j;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		for(i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		sort(a, a + n);
		i = (n - 1) / 2;
		j = i + 1;
		while(j < n){
			printf("%d ", a[i]);
			i--;
			printf("%d ", a[j]);
			j++;
		}
		if(i == 0){
			printf("%d", a[0]);
		}
		printf("\n");
	}
	return 0;
}