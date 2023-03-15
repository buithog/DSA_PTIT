#include<bits/stdc++.h>
using namespace std;
int n,k,ok,a[1000];
void in(){
	for(int i=1;i<=k;i++) cout<<a[i]<<" ";
	cout<<endl;
}
void quaylui(int i){
	int j;
	for(j = n-k+i;j>=a[i-1]+1;j--){
		a[i] = j;
		if(i == k) in();
		else quaylui(i+1);
		}
	}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		quaylui(1);
	}
}


