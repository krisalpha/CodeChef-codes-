#include<stdio.h>
#include<stdlib.h>


int main()
{
	int T,N,i; float sum=0,n;
	scanf("%d",&T);
	while(T--)
	{   sum=0;
		scanf("%d",&N);
		n=N;
		for(i=1;i<=N;i++)
		{
			sum+=n/i;
		}
		
		printf("%.1f\n",sum);
		
	}
	return 0;
}
