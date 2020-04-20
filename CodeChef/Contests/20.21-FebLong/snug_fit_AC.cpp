#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long int t, n, i;
	unsigned long long int s;
	cin >> t;
	while(t--)
	{
		s = 0;
		cin >> n;
		unsigned long long int a[n];
		unsigned long long int b[n];
		for(i = 0; i < n; i++)
			cin >> a[i];
		for(i = 0; i < n; i++)
			cin >> b[i];
		sort(a, a + n);
		sort(b, b + n);
		for(i = 0; i < n; i++)
			s += a[i] < b[i] ? a[i] : b[i];
		cout << s << endl;
	}
	return 0;
}