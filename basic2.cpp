#include<bits/stdc++.h>
using namespace std;
int n,a[30],ok,b[30];
void khoitao(){
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
}
int check(){
	for(int i=1;i<=n;i++){
		if(a[i] != b[i]) return 0;
		return 1;
}
}
void sinh(){
	int i=n-1;
	while(i>=1 && a[i] > a[i+1]){
		i--;
	}
	if(i == 0 ) ok=0;
	else {
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
	for(int i=1;i<n;i++){
		cin>>b[i];
	}
	ok=1;
	int dem=0;
	khoitao();
	while(ok){
		if(check() == 0) dem++;
		else break;
		sinh();
	}
	cout<<dem<<endl;
}
}
