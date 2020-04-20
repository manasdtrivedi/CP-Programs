#include<iostream>

using namespace std;

int main()
{
	int T, N, K, countOfNonOnes, numberRead;
	cin >> T;
	while(T--)
	{
		cin >> N >> K;
		countOfNonOnes = 0;
		while(N--)
		{
			cin >> numberRead;
			if(numberRead != 1)
			{
				countOfNonOnes++;
			}
		}
		if(countOfNonOnes <= K)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
