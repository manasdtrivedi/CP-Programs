#include<iostream>

using namespace std;

int main()
{
	int T, N, a[128], i, j, foundAt, count;
	a[0] = 0;
	for(i = 1; i < 128; i++)
	{
		foundAt = -1;
		for(j = i - 2; j >= 0; j--)
		{
			if(a[j] == a[i - 1])
			{
				foundAt = j;
				break;
			}
		}
		if(foundAt != -1)
		{
			a[i] = i - 1 - j;
		}
		else
		{
			a[i] = 0;
		}
	}
	cin >> T;
	while(T--)
	{
		cin >> N;
		count = 0;
		for(i = 0; i < N; i++)
		{
			if(a[i] == a[N - 1])
				count++;
		}
		cout << count << endl;
	}

	return 0;
}
