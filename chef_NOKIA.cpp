/*  code written by krishan chopra

this code is protected by copyrights and end user agreement 

viewing,circulation or archival of this code is illegal  !!!!!!!!  seriously????

code has expired its use by date...      best before %^&** days after packaging

copy code at own risk

*/

#include<stdio.h>
int min[31]={0,2};
 
int main()
{

int i,t,n,k;

for(i=2;i<=30;i++)

min[i]=i+1+min[(i+1)/2-1]+min[i-(i+1)/2];

scanf("%d",&t);

while(t--)
{
scanf("%d%d",&n,&k);

int max=(n)+((n)*(n+1))/2;
 
 int out=-1;
 
 if(k>max)

out=k-max;

else if(min[n]<=k)

out=0;
 
printf("%d\n",out);
 
}
 
return 0;
}
 
