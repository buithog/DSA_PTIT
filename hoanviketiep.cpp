#include<bits/stdc++.h>
using namespace std;
int a[30] ={0},n;
void sinh(){
	int i=n-1;
	while(i>0 && a[i] > a[i+1]){
		i--;
	}
	if(i == 0) {
		reverse(a+1,a+n+1);
	} 
	else{
	int j=n;
		while(a[i] > a[j]) j--;
		swap(a[i],a[j]);
		int l=i+1,r=n;
		while(l<r){
			swap(a[l],a[r]);
			l++;r--;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sinh();
		for(int i=1;i<=n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
