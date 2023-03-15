#include<bits/stdc++.h>
using namespace std;
int n,a[100]= {0},ok;
void in(){
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int check(){
	int l=1,r=n;
	while(l<r){
		if(a[l] != a[r]) return 0;
		else {
			l++;r--;
		}
	}
	return 1;
}
void sinh(){
	int i=n;
	while(a[i] ==1 && i>0){
		a[i] =0;
		i--;
	}
	if(i==0) ok=1;
	else a[i]=1;
}
void khoitao(){
	memset(a,0,sizeof(a));
	ok=0;
}
int main(){
	cin>>n;
	khoitao();
	while(!ok) {
		if(check()) in();
		sinh();
	}
}
