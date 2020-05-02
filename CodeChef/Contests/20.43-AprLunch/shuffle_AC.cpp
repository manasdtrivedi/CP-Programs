#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, k, n, i, temp, flag;
	int a[100000];
	scanf("%d", &t);
	while(t--){
		scanf("%d %d", &n, &k);
		for(i = 0; i < n; i++)
			scanf("%d", &a[i]);
		flag = 0;
		while(flag != 1){
			flag = 1;
			for(i = 0; i < n - k; i++){
				if(a[i] > a[i + k]){
					flag = 0;
					temp = a[i];
					a[i] = a[i + k];
					a[i + k] = temp;
				}
			}
		}
		flag = 0;
		for(i = 0; i < n - 1; i++){
			if(a[i] > a[i + 1])
				flag = 1;
		}
		if(flag == 1)
			printf("no\n");
		else
			printf("yes\n");
	}
}