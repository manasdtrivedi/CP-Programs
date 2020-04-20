#include<stdio.h>

void main()
{
	int t, t1;
	scanf("%d", &t);
	t1=t;
	while(t1--)
	{
		if(t1!=t-1)
			printf("\n");
		int n, i, j, t;
		scanf("%d", &n);
		int a[n];
		for(i=0; i<n; i++)
			scanf("%d", &a[i]);
		for(i=n-1; i>0; i--)
			for(j=0; j<i; j++)
				if(a[j]>a[j+1])
				{
					t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
				}
		if((a[n/4-1]!=a[n/4])&&(a[n/2-1]!=a[n/2])&&(a[3*n/4-1]!=a[3*n/4]))
			printf("%d %d %d", a[n/4], a[n/2], a[3*n/4]);
		else
			printf("-1");
	}
}
