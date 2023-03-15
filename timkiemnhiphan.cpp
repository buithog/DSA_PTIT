#include<bits/stdc++.h>
using namespace std;
int binaryseach(int a[],int l,int r,int x){
	if( l > r) return 0;
	int mid = (l+r)/2;
	if(a[mid] < x )
		return binaryseach(a,mid + 1,r,x);
	else 
		return binaryseach(a,l,mid + 1,x);
}
int main(){
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	if(binaryseach(a,0,n,x) != 0) cout<<a[binaryseach(a,0,n,x)]<<endl;
	else 
	cout<<" NO"<<endl;
}
