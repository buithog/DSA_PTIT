#include<bits/stdc++.h>
using namespace std;
long long m=1e9+7;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long  a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		long long res=0;
		for(int i=0;i<n;i++){
			res+= a[i]*i%m;
			res %= m;
		}
		cout<<res<<endl;
	}
}
