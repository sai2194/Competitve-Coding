#include<iostream>
using namespace std;
#include<vector>
/* This function calculates (a^b)%MOD */
long long pow(int a, int b, int MOD)
{
long long x=1,y=a; 
while(b > 0)
{
if(b%2 == 1)
{
x=(x*y);
if(x>MOD) x%=MOD;
}
y = (y*y);
if(y>MOD) y%=MOD; 
b /= 2;
}
return x;
}
long long InverseEuler(int n, int MOD)
{
return pow(n,MOD-2,MOD);
}
long long C(int n, int r, int MOD)
{
vector<long long> f(n,1);
for (int i=2; i<=n;i++)
f[i]= (f[i-1]*i) % MOD;
return (f[n]*((InverseEuler(f[r], MOD) * InverseEuler(f[n-r], MOD)) % MOD)) % MOD;
}
int main()
{    
int n,r,p;
printf("%lld\n",C(100,2,1000000007));

}
