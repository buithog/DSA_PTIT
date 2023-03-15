#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	long res=0,x=a[0],b=a[n-1];
	for(int i=1;i<=2;i++){
		x*= a[i]; b *= a[n-i-1];
		res= max(x,b);
	}
	long c =a[0]*a[1]*a[n-1];
	cout<<max(res,c)<<endl;
}
