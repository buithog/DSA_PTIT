#include<bits/stdc++.h>
using namespace std;
int m = 1e9+7;
long long n,k;
long long luythua(long long n,long long k){
	if(k==0) return 1;
	long long x=luythua(n,k/2);
	if(k%2 == 0) return (x*x%m)%m;
	return (n*(x*x%m))%m;
}
int main(){
	while(1){
		cin>>n>>k;
		if(n==0 && k==0) break;
		cout<<luythua(n,k)<<endl;
	}
}
