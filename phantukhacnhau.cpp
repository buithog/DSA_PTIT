#include<bits/stdc++.h>
using namespace std;
int timkiem(long long a[],long long b[],int n){
	int m;
	int t=n;
	int l=0,r=n-1;
	while(l<=r){
		m= (l+r)/2;
		if(a[m] == b[m]) l=m+1;
		else{
			t=m;
			r=m-1;
		}
	}
	return t;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n],b[n];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n-1;i++) cin>>b[i];
		cout<<timkiem(a,b,n) +1<<endl;
	}
}
