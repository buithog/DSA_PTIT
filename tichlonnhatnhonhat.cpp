#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		long a[n];
		long b[k];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<k;i++) cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		cout<<a[n-1]*b[0]<<endl;
		}
	}
