#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, r, c, noOfMoves, i;
	cin >> t;
	while(t--)
	{
	    cin >> r >> c;
	    if(r == c)
	    {
	        if(r == 1)
	            noOfMoves = 37;
	        else
	            noOfMoves = 38;
	    }
	    else
	        noOfMoves = 39;
	    cout << noOfMoves << endl;
	    if(noOfMoves == 39)
	    {
	        cout << (r + c) / 2 << " " << (r + c) / 2 << endl;
	    }
	    if(noOfMoves >= 38)
	    {
	        cout << 1 << " " << 1 << endl;
	    }
	    for(i = 2; i <= 4; i++)
	    {
	        cout << i << " " << i << endl;
	        int row = 1;
	        int column = i * 2 - row;
	        do
	        {
	            if(row != column)
	            {
	                cout << row << " " << column << endl;
	            }
	            row++;
	            column--;
	        }while(column != 0);
	        cout << i << " " << i << endl;
	    }
	    for(i = 5; i <= 7; i++)
	    {
	        cout << i << " " << i << endl;
	        int row = 8;
	        int column = i * 2 - row;
	        do
	        {
	            if(row != column)
	            {
	                cout << row << " " << column << endl;
	            }
	            row--;
	            column++;
	        }while(column != 9);
	        cout << i << " " << i << endl;
	    }
	    cout << 8 << " " << 8 << endl;
	}
	return 0;
}