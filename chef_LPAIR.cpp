#include<stdio.h>
#include<vector>
#include<algorithm>
#define getcx getchar_unlocked
using namespace std;

inline void inp(long long int &n)
{
n=0;
long long int ch=getcx();
long long int sign=1;
while(ch<'0'||ch>'9')
{
if(ch=='-')
sign=-1;
ch=getcx();
}
while(ch>='0'&& ch<='9')
{
n = (n<<3)+(n<<1) + ch-'0';
ch=getcx();
}
n=n*sign;
}

long long int merge(long long int c[],long long int d[],int left,int mid,int right)
{
	int first=left,second=mid,pointer=left,i;
	long long int count=0;
	while(first<=mid-1&&second<=right)
	{
		if(c[first]>c[second])
		{
		d[pointer++]=c[second++];
		count+=mid-first;
	    }
		else
		d[pointer++]=c[first++];
	}
	while(first<=mid-1)
	d[pointer++]=c[first++];
	while(second<=right)
	d[pointer++]=c[second++];
	for(i=left;i<=right;i++)
	c[i]=d[i];
	return count;
}
long long int mergesort(long long int c[],long long int d[],int left,int right)
{
	long long int mid,count=0;
	if(left<right)
	{
		mid=(left+right)/2;
		count=mergesort(c,d,left,mid);       //   before merging ---    it is sorting two subarrays 
		                                     //  it divides array into 2 sorted subarrays and then count+= counts to merge them 
		count+=mergesort(c,d,mid+1,right);   //  read this technique from geeks for geeks
		count+=merge(c,d,left,mid+1,right);
	}
	return count;
} 
int main()
{   
     
	int n,i;
	scanf("%d",&n);
	vector < pair<long long int,long long int> > v;
	long  long int a,b,c[100005],d[100005];
	for(i=0;i<n;i++)
	{
		inp(a);
		inp(b);
		v.push_back(make_pair(a,b));
	}
	sort(v.begin(),v.end());
	int size=v.size();
	for(i=0;i<size;i++)
	    c[i]=v[i].second;
	printf("%lld\n",mergesort(c,d,0,size-1));
	return 0;
	
	
} 
