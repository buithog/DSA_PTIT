#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int m=n/2;
	int sum1=0,res=0,sum2=0;
	for(int i=0;i<m;i++) sum1+=a[i];
	for(int i=m;i<n;i++) sum2+=a[i];
	res=abs(sum1-sum2);
	if(sum1>sum2){
					res=min(abs((sum1-a[m-1])-(sum2+a[m]) ),res);
					m--;}
	if(sum1<sum2){
		res=min(abs((sum1+a[m-1])-(sum2-a[m]) ),res);
		m++;
	}
	cout<<res<<endl;
}
