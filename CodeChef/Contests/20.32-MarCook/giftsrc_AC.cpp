#include<bits/stdc++.h>
using namespace std;
int main(){
	int T, N, x, y, prevMove, i;
	char move;
	cin >> T;
	while(T--){
		x = 0;
		y = 0;
		prevMove = -1;
		cin >> N;
		for(i = 0; i < N; i++){
			cin >> move;
			switch(move){
				case 'L': if(prevMove != 0 && prevMove != 1){
					x--;
					prevMove = 0;
				}
				break;
				case 'R': if(prevMove != 0 && prevMove != 1){
					x++;
					prevMove = 1;
				}
				break;
				case 'U': if(prevMove != 2 && prevMove != 3){
					y++;
					prevMove = 2;
				}
				break;
				case 'D': if(prevMove != 2 && prevMove != 3){
					y--;
					prevMove = 3;
				}
				break;
			}
		}
		cout << x << " " << y << endl;
	}
}