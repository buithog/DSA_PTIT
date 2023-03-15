#include<bits/stdc++.h>
using namespace std;
int a[30],n,k,ok;
void sinh(){
	int i=k;
	while(i>=1 && a[i] == n-k+i){
		i--;
	}
	if(i == 0) { 
	ok=0;
	}
	else {
	a[i]++;
	for(int j=i+1;j<=k;j++){
		a[j] = a[j-1] +1;
	}
	}
}
void khoitao(){
	for(int i=1;i<=k;i++){
		a[i] = i;
	}
}
void in(){
	for(int i=1;i<=k;i++) cout<<a[i];
	cout<<" ";
}
int main(){
	int t;
	cin>>t;
	while(t--){
	cin>>n>>k;
	ok=1;
	khoitao();
	while(ok){
		in();
		sinh();
		}
		cout<<endl;
	}
}
