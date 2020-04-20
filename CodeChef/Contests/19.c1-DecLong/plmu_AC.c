#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, i=0, j=0, a;
		scanf("%d", &n);
		while(n--)
		{
			scanf("%d", &a);
			if(a==2)
				i++;
			else if(a==0)
				j++;
		}
		printf("%d\n", i*(i-1)/2 + j*(j-1)/2);
	}
	return 0;
}
