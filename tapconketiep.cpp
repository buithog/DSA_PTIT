#include<bits/stdc++.h>
using namespace std;
int n,k,a[1001],ok;
void khoitao(){
	for(int i=1;i<=k;i++){
		a[i] =i;
	}
}
void sinh(){
	int i=k;
	while(i>=0 && a[i] == n-k+i){
		i--;
	}
	if(i == 0) ok=0;//cauhinhcuoi
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j] =a[j-1] +1;
		}
	}
}
void in(){
	for(int i=1;i<=k;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		ok=1;
		for(int i=1;i<=k;i++){
			cin>>a[i];
		}
		sinh();
		if(ok == 0){
			khoitao();
			in();
		}
		else in();
	}
}
