#include<bits/stdc++.h>
using namespace std;
const int N=30;
int n,a[N];
long long f[N][N];
int main()
{
cin>>n;
for(int i=1;i<=n;i++) cin>>a[i];
f[0][0]=1;
for(int i=1;i<=n;i++)
{
for(int j=0;j<=i;j++)
{
for(int k=max(0,a[i]-j+1);k<=min(a[i],j);k++)
{
f[i][j]+=f[i-1][j-k];
}
}
}
cout<<f[n][n]<<endl;
return 0;
}
