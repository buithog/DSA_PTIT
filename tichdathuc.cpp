#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n],b[k];
		int c[ n + k];
		memset(c,0,sizeof(c));
		nhap(a,n);
		nhap(b,k);
		for(int i=0;i<n;i++){
			for(int j=0;j<k;j++){
				c[ i + j ] += a[i]*b[j]; 
			}
		}
		for(int i=0;i<n+k-1;i++){
			cout<<c[i]<<" ";
		}
		cout<<endl;
	}
}
