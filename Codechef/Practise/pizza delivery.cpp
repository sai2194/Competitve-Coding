#include<iostream>
#include<climits>
using namespace std;
int dp[504][1004];
int min(int x,int y)
{
	return x<y?x:y;
}
int main()
{
	int t,n,i,j;
	long int sum;
	int h[501];
	int k[501];
	cin>>t;
	while(t--)
	{   int max=0;
	sum=0;
		cin>>n;
		for(i=1;i<=n;i++)
		{
			 cin>>h[i];
			if(max<h[i])
			max=h[i];
		}
		max=max*2;
	
		for(i=1;i<=n;i++)
		cin>>k[i];
		for(i=0;i<=n;i++)
		dp[0][0]=0;
		for(i=1;i<=max;i++)
		dp[0][i]=100000;
		for(i=1;i<=n;i++)
		{
			for(j=0;j<=max;j++)
			{
				dp[i][j]=dp[i-1][j];
				if(k[i]<=j)
				{
					dp[i][j]=min(dp[i][j],1+dp[i][j-k[i]]);
				}
			}
		}
		
		for(i=1;i<=n;i++)
		{
			sum+=dp[n][2*h[i]];
		}
		cout<<sum<<endl;
		
	
		
		
	}
}
