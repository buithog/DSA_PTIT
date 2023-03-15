#include<bits/stdc++.h>
using namespace std;
int n,k,a[100],b[100],ok;
void sinh(){
	int i=k;
	while(i>0 && a[i] == n-k+i){
		i--;
	}
		if(i == 0) { 
	ok= 1;
	}
	else {
	a[i]++;
	for(int j=i+1;j<=k;j++){
		a[j] = a[j-1] +1;
		}
	}
}
void khoitao(){
	for(int i=1;i<=k;i++) a[i] = i;
	ok=0;
}
int check(){
	for(int i=1;i<=k;i++){
		if(a[i] != b[i]) return 0;
	}
	return 1;
}
int dem =0;
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=k;i++) cin>>b[i];
		khoitao();
		while(!ok){
			if(!check()){
				sinh();dem++;
			}
		}
		cout<<dem<<endl;
		dem=0;
	}	
}
