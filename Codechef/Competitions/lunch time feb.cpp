#include<iostream>
using namespace std;
string s[21];
int main()
{
	int t,n,k,i,j,x1,x2,y1,y2,z1,z2,c,f;
	cin>>t;
	while(t--)
	{
		c=1;
		f=0;
		cin>>n>>k;
		for(i=0;i<n;i++)
		//for(j=1;j<=n;j++)
		cin>>s[i];
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(s[i][j]=='.')
				{
					c=1;
					  x1=j-1;
					  x2=j+1;
					  while(x1>=0)
					  {
					  	if(s[i][x1]!='X')
					  	break;
					  	x1--;
					  	c++;
					  }
					  if(c>=k)
					  {
					  	f=1;
					  	break;
					  }
					  if(f==1)
					  break;
					   while(x2<n)
					  {
					  	if(s[i][x2]!='X')
					  	break;
					  	x2++;
					  	c++;
					  }
					  if(c>=k)
					  {
					  	f=1;
					  	break;
					  }
					  if(f==1)
					  break;
					  c=1;
					  x1=i-1;
					  x2=i+1;
					  while(x1>=0)
					  {
					  	if(s[x1][j]!='X')
					  	break;
					  	x1--;
					  	c++;
					  }
					  if(c>=k)
					  {
					  	f=1;
					  	break;
					  }
					  if(f==1)
					  break;
					   while(x2<n)
					  {
					  	if(s[x2][j]!='X')
					  	break;
					  	x2++;
					  	c++;
					  }
					  if(c>=k)
					  {
					  	f=1;
					  	break;
					  }
					  if(f==1)
					  break;
					  c=1;
					  x1=i-1;
					  x2=i+1;
					  y1=j-1;
					  y2=j+1;
					  while(x1>=0&&y1>=0)
					  {
					  	if(s[x1][y1]!='X')
					  	break;
					  	x1--;
					  	y1--;
					  	c++;
					  }
					  if(c>=k)
					  {
					  	f=1;
					  	break;
					  }
					  if(f==1)
					  break;
					   while(x2<n&&y2<n)
					  {
					  	if(s[x2][y2]!='X')
					  	break;
					  	x2++;
					  	y2++;
					  	c++;
					  }
					  if(c>=k)
					  {
					  	f=1;
					  	break;
					  }
					  if(f==1)
					  break;
					  c=1;
					  x1=i-1;
					  x2=i+1;
					  y1=j+1;
					  y2=j-1;
					  while(x1>=0&&y1<n)
					  {
					  	if(s[x1][y1]!='X')
					  	break;
					  	x1--;
					  	y1++;
					  	c++;
					  }
					  if(c>=k)
					  {
					  	f=1;
					  	break;
					  }
					  if(f==1)
					  break;
					   while(x2<n&&y2>=0)
					  {
					  	if(s[x2][y2]!='X')
					  	break;
					  	x2++;
					  	y2--;
					  	c++;
					  }
					  if(c>=k)
					  {
					  	f=1;
					  	break;
					  }
					  if(f==1)
					  break;
				}
				if(f==1)
			    break;
			}
			if(f==1)
		    break;
		}
		if(f==1)
		{
		//cout<<c<<endl;
		cout<<"YES\n";
	}
		else
		cout<<"NO\n";
	}
}
