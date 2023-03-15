#include<bits/stdc++.h>
using namespace std;
int binaryseach(long a[] ,int l,int r,int x){
	if(a[l] == 0) l=1;
	int m= (l+r)/2;
	if(l>r){
		return -1;
	}
	if(a[m] == x ) return m;
	if(a[m] > x) return binaryseach(a,l,m-1,x);
	else return binaryseach(a,m+1,r,x);
	return -1; 
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int x = binaryseach(a,0,n-1,k);
		if(x == -1) cout<<"NO"<<endl;
		else cout<<x+1<<endl;
	}
}
