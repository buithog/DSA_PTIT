#include<bits/stdc++.h>
using namespace std;
		long a[100000];
int main(){
	int n,q;
	cin>>n>>q;
	for(int i=0;i<n;i++) a[i] =0;
	while(q--){
		int x,y;
		cin>>x>>y;
		if( x>= 1 && y<=n){
		for(int i= x-1;i < y;i++){
		if(a[i] == 0) a[i]=1;
		else a[i] =0;
		}
	}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
