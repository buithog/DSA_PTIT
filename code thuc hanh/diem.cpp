#include<bits/stdc++.h>
using namespace std;
long long m =1e9+7;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[102][102];long long b[102];
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		for(int i=1;i<=10;i++) a[2][i] =i;
		for(int i=1;i<=n+1;i++) a[i][1] =1;
		for(int i=2;i<=n;i++){
			for(int j=2;j<=10;j++){
				a[i][j] =a[i-1][j]+a[i][j-1];
			}
		}
		for(int i=1;i<=10;i++){
			b[n+1] =(b[n+1]+a[n+1][i])%m;
		}
		cout<<b[n+1]<<endl;
	}
}
