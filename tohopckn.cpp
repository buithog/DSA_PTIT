#include<bits/stdc++.h>
using namespace std;
int n,k,a[100],sum,dem=0;

void Try(int i){
	int j;
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i] =j;
		if(i==n) dem++;
		else Try(i+1);
	}
}
int main(){
		int t;
		cin>>t;
		while(t--){
			cin>>n>>k;
			Try(1);
			cout<<dem<<endl;
			dem=0;
		}
		}
	
