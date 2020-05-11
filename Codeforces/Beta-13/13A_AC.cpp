#include<iostream>
using namespace std;

int* decimal(int res[], int base, int inputNum) 
{ 
    int index = 0;
    while (inputNum > 0) 
    { 
        res[index++] = inputNum % base;
        //cout << "res[index] is " << res[index-1] << "." << endl;
        inputNum /= base; 
    } 
    res[index] = -1;
  
    return res; 
} 

int gcd(int a, int b) 
{ 
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
    if (a == b) 
        return a; 
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
} 

int main()
{
	int inputNum, base, sum = 0, deno, hcf, i, j;
	cin >> inputNum;
	deno = inputNum - 2;
    int res[100];
    for(i = 2; i < inputNum; i++)
    {
    	decimal(res, i, inputNum);
    	j = 0;
    	while(res[j] != -1)
    	{
    		//cout << "res[j] = " << res[j] << " is being added to sum." << endl;
    		sum += res[j];
    		j++;
    	}
    }
    //cout << "Sum is " << sum  << " and deno is " << deno << endl;
    hcf = gcd(sum, deno);
    sum /= hcf;
    deno /= hcf;
    cout << sum << "/" << deno << endl;
    return 0; 
}