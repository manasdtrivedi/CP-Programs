#include<iostream>

using namespace std;

int main()
{
	int T, i, integerRead, count;
	cin >> T;
	while(T--)
	{
		i = 100;
		count = 0;
		while(i--)
		{
			cin >> integerRead;
			if(integerRead <=30)
				count++;
		}
		if(count >= 60)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	return 0;
}
