#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int T, N;
	cin >> T;
	while(T--)
	{
		cin >> N;
		int a[N], lastAdded = -1, treesPlanted = 0, i;
		for(int i = 0; i < N; i++)
			cin >> a[i];
		if(N == 1)
		{
			treesPlanted = 1;
		}
		else
		{
			sort(a, a+N);
			if(a[1] != a[0] + 1)
			{
				lastAdded = a[0] + 1;
				treesPlanted++;
			}
			for(i = 1; i < N - 1; i++)
			{
				if(a[i - 1] != a[i] - 1 && a[i + 1] != a[i] + 1 && lastAdded != a[i] - 1)
				{
					lastAdded = a[i] + 1;
					treesPlanted++;
				}
			}
			if(a[N - 2] != a[N - 1] - 1 && lastAdded != a[N - 1] -1)
			{
				treesPlanted++;
			}
		}
		cout << treesPlanted << endl;
	}
	return 0;
}
