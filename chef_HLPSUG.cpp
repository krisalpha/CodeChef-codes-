#include<stdio.h>
#include<math.h>
int prime(int n)
{
int h;
if(n%2==0)
return 0;


for(h=3;h<=sqrt(n);h+=2)
{
	if(n%h==0)
	return 0;
	
	else 
    continue;

}
return 1;

	
}

int main()
{
	
	int T,n,count;
	scanf("%d",&T);
	while(T--)
	{   scanf("%d",&n);
		count=0;
		for(int i=29;i<=n;i++)
		{
			if(prime(i))
			  count+=i;
		}
	   printf("%d\n",count);
	}
	return 0;
}
