#include<bits/stdc++.h>
using namespace std;
long long a[100];
char fibo(int n,long long k){
	if(n==1) return '0';
	if(n== 2) return '1';
	if(k <= a[n-2]) return fibo(n-2,k);
	return fibo(n-1,k-a[n-2]);
}
int main(){
	a[0] = 0; a[1]=1;
	for(int i=2;i<=92;i++) a[i] = a[i-1]+a[i-2];
	int t,n;
	long long k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<fibo(n,k)<<endl;
	}
}
