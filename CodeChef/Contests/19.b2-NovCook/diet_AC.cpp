#include<iostream>
using namespace std;
int main()
{
	int t, n, k;
	scanf("%d", &t);
	while(t--)
	{
		int proteinStock, proteinBought, i, dayWhenUnable;
		cin >> n >> k;
		proteinStock = 0;
		for(i=1; i<=n; i++)
		{
			cin >> proteinBought;
			proteinStock += proteinBought;
			proteinStock -= k;
			if(proteinStock<0)
			{
				cout << "NO " << i << endl;
				break;
			}
		}
		if(i>n)
		{
			cout << "YES" << endl;
		}
		else
		{
			while(getchar()!='\n'){}
		}
	}
	return 0;
}
