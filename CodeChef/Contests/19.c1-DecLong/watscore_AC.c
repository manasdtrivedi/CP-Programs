#include<stdio.h>
int main()
{
	
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		int scores[11]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		int qno, score;
		scanf("%d", &n);
		while(n--)
		{
			scanf("%d", &qno);
			scanf("%d", &score);

			if(score>scores[qno-1])
				scores[qno-1]=score;
		}
		printf("%d\n", scores[0]+scores[1]+scores[2]+scores[3]+scores[4]+scores[5]+scores[6]+scores[7]);
	}
	return 0;
}
