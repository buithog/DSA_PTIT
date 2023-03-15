#include<bits/stdc++.h>
using namespace std;
int a[50],n,ok;
void in(int n){
	cout<<"(";
	for(int i=1;i<n;i++) cout<<a[i]<<" ";
	cout<<a[n]<<") ";
}
void quaylui(int i,int index,int sum){
	int j;
	for(j=i;j>0;j--){
		a[index] = j;
		if(j == sum) in(index);
		else if(j < sum){
			quaylui(j,index+1,sum-j);
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int i;
		cin>>n;
		quaylui(n,1,n);
		cout<<endl;
	}
}
