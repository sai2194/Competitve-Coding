#include<cstdio>
#include<vector>
using namespace std;
typedef vector<int> VI;
long long int c,res,count,i,a,b,n,m;
	vector<VI> s;
	VI p;
void dfs(int k)
{
	c++;
	p[k]=1;
	for(VI::iterator v=s[k].begin();v!=s[k].end();v++)
	{
		if(!p[*v])
		dfs(*v);
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{   count=1;
	    res=0;
		scanf("%lld%lld",&n,&m);
		s=vector<VI> (n);
		p=VI (n,0);
		for(i=0;i<m;i++)
		{
			scanf("%lld%lld",&a,&b);
			a--;
			b--;
			s[a].push_back(b);
			s[b].push_back(a);
		}
		for(i=0;i<n;i++)
		{
			if(p[i])
			continue;
			res++;
			c=0;
			dfs(i);
			count=c*count%1000000007;
			
		}
		printf("%lld %lld\n",res,count);
	}
}

