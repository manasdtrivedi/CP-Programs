#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, n, m, i;
	cin >> t;
	while(t--) {
	    cin >> n >> m;
	    int f[n];
	    int p;
	    int cost[m] = {0};
	    int mthFruitExists[m] = {0};
	    for(i = 0; i < n; i++) {
	        cin >> f[i];
	        f[i]--;
	        mthFruitExists[f[i]] = 1;
	    }
	    for(i = 0; i < n; i++) {
	        cin >> p;
	        cost[f[i]] += p;
	    }
	    int minPrice = INT_MAX;
	    for(i = 0; i < m; i++) {
	        if(cost[i] < minPrice && mthFruitExists[i] == 1)
	            minPrice = cost[i];
	    }
	    cout << minPrice << endl;
	}
	return 0;
}