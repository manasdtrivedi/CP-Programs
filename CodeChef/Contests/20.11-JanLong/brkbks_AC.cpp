#include<iostream>

using namespace std;

int main()
{
	int T, S, W1, W2, W3;
	cin >> T;
	while(T--)
	{
		cin >> S >> W1 >> W2 >> W3;
		if(W1 == 1 && W2 == 1 && W3 == 1)
		{
			if(S > 2)
				cout << "1" << endl;
			else if(S == 2)
				cout << "2" << endl;
			else
				cout << "3" << endl;
		}
		else if(W1 == 1 && W2 == 1 && W3 == 2)
		{
			if(S > 3)
				cout << "1" << endl;
			else
				cout << "2" << endl;
		}
		else if(W1 == 2 && W2 == 1 && W3 == 1)
		{
			if(S > 3)
                                cout << "1" << endl;
                        else
                                cout << "2" << endl;
		}
		else if(W1 == 1 && W3 == 1 && W2 == 2)
		{
			if(S > 3)
				cout << "1" << endl;
			else if( S == 3)
				cout << "2" << endl;
			else
				cout << "3" << endl;
		}
		else if(W1 == 1 ^ W2 == 1 ^ W3 == 1)
		{
			if(S > 4)
				cout << "1" << endl;
			else if(S > 2)
				cout << "2" << endl;
			else
				cout << "3" << endl;
		}
		else
		{
			if(S > 5)
				cout << "1" << endl;
			else if(S > 3)
				cout << "2" << endl;
			else
				cout << "3" << endl;
		}
	}
	return 0;
}
