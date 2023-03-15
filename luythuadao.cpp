#include<bits/stdc++.h>
using namespace std;
int m = 1e9+7;
long long luythua(long long n,long long k){
	if(k==0) return 1;
	long long x=luythua(n,k/2);
	if(k%2 == 0) return (x*x%m)%m;
	return (n*(x*x%m))%m;
}
int main(){
	long long t,n;
	cin>>t;
	while(t--){
		cin>>n;
		long long x=0;
		long long d=n;
		while(d>0){
			x =x*10 +d%10;
			d/=10; 
		}
		cout<<luythua(n,x)<<endl;
	}
}
