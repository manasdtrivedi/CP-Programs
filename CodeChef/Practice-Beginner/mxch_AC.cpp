#include<iostream>

using namespace std;

int main()
{
	int T, N, K, i;
	cin >> T;
	while(T--)
	{
		cin >> N >> K;
		cout << N - K;
		for(i = N - K + 1; i <= N; i++)
			cout << " " << i;
		for(i = 1; i <= N - K - 1; i++)
			cout << " " << i;
	}
	return 0;
}
