#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, n, a[200001], i, skill, distinctNos, maxFreq;
	scanf("%d", &t);
	while(t--){
		distinctNos = 0;
		maxFreq = 1;
		scanf("%d", &n);
		for(i = 0; i <= n; i++){
			a[i] = 0;
		}
		for(i = 0; i < n; i++){
			scanf("%d", &skill);
			if(a[skill] == 0){
				distinctNos++;
				a[skill]++;
			}
			else{
				a[skill]++;
				if(a[skill] > maxFreq){
					maxFreq = a[skill];
				}
			}
		}
		if(distinctNos == maxFreq){
			if(distinctNos == 1){
				printf("%d\n", 0);
			}
			else{
				printf("%d\n", distinctNos - 1);
			}
		}
		else if(distinctNos > maxFreq){
			printf("%d\n", maxFreq);
		}
		else{
			printf("%d\n", distinctNos);
		}
	}
	return 0;
}