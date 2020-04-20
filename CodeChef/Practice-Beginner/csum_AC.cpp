#include<iostream>

using namespace std;

int main()
{
	int T, N, K, i, j, flag;
	cin >> T;
	while(T--)
	{
		cin >> N >> K;
		int a[N];
		for(i = 0; i < N; i++)
			cin >> a[i];
		flag = 0;
		i = 0;
		while(flag == 0 && i < N)
		{
			if(a[i] < K)
			{
				j = i + 1;
				while(flag == 0 && j < N)
				{
					if(a[i] + a[j] == K)
						flag = 1;
					else
						j++;
				}
			}
			i++;
		}
		if(flag == 1)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
