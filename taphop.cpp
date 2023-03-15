#include<bits/stdc++.h>
using namespace std;
int n,k,a[100],sum,dem=0;
void check(){
	int s=0;
	for(int i=1;i<=k;i++){
		s+=a[i];
	}
	if(s==sum) dem++;
}
void Try(int i){
	int j;
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i] =j;
		if(i==n) check();
		else Try(i+1);
	}
}
int main(){
		while(1){
		cin>>n>>k>>sum;
		if(n==0&&k==0 && sum==0) break;
		else{
		Try(1);
		cout<<dem<<endl;
		dem=0;
			}
		}
	}
