#include<stdio.h>

inline int getint()
{
int num=0;
char c=getchar_unlocked();
while(!(c>='0' && c<='9'))
c=getchar_unlocked();
while(c>='0' && c<='9')
{
num=(num<<3)+(num<<1)+c-'0';
c=getchar_unlocked();
}
return num;
}
 
int main()
{
	int t,n,k,ans,j;
	char str[5];
	t=getint();
	while(t--)
	{
		n=getint();//scanf("%d",&n);
		k=getint();//scanf("%d",&k);
		ans=getint();//scanf("%d",&ans);
		 int arr[n];
		for(j=0;j<n;j++)
		   arr[j]=getint();//scanf("%d",&arr[j]);
		scanf("%s",str);
		if(str[0]=='X')
		{
			if(k%2!=0)
			{
			for(j=0;j<n;j++)
			   ans=ans^arr[j];
			}
		}
		else if(str[0]=='A')
		{
			if(k!=0)
			{
			  for(j=0;j<n;j++)
		        ans=ans&arr[j];
		    }
		}
		else if(str[0]=='O')
		{
			if(k!=0)
			{
			for(j=0;j<n;j++)
			  ans=ans|arr[j];
			}
		}
		printf("%d\n",ans);
	}
	return 0;
} 
