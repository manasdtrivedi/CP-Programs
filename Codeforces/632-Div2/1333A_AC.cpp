#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, n, m, i, j, noOfBlocks;
	cin >> t;
	while(t--){
		cin >> n >> m;
		noOfBlocks = n * m;
		if(m % 2 == 1 && n % 2 == 1){
			for(i = 0; i < noOfBlocks; i++){
				if(i % 2 == 0)
					cout << 'B';
				else
					cout << 'W';
				if((i % m) == (m - 1))
					cout << endl;
			}
		}
		else if(m % 2 == 0 && n % 2 == 0){
			cout << "BB";
			for(j = 2; j < m; j++){
				if(j % 2 == 0)
					cout << 'B';
				else
					cout << 'W';
			}
			cout << endl;
			for(i = 1; i < n; i++){
				for(j = 0; j < m; j++){
					if(i % 2 == 0){
						if(j % 2 == 0)
							cout << 'B';
						else
							cout << 'W';
					}
					else{
						if(j % 2 == 0)
							cout << 'W';
						else
							cout << 'B';
					}
				}
				cout << endl;
			}
		}
		else{
			for(i = 0; i < n - 1; i++){
				for(j = 0; j < m; j++){
					if(i % 2 == 0){
						if(j % 2 == 0)
							cout << 'B';
						else
							cout << 'W';
					}
					else{
						if(j % 2 == 0)
							cout << 'W';
						else
							cout << 'B';
					}
				}
				cout << endl;
			}
			if(n%2 == 1){
				for(j = 0; j < m - 1; j++){
					if(j % 2 == 0)
						cout << 'B';
					else
						cout << 'W';
				}
			}
			else{
				for(j = 0; j < m - 1; j++){
					if(j % 2 == 0)
						cout << 'W';
					else
						cout << 'B';
				}
			}
			cout << 'B' << endl;
		}
	}
}