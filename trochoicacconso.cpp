#include<bits/stdc++.h>
using namespace std;
int a[100],n;
bool used[100] = {0};
void in(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<endl;
}
bool check(){
	for(int i=1;i<n;i++){
		if(a[i]+1  == a[i+1] || a[i]-1 == a[i+1]) return false;
	}
	return true;
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(!used[j] ){
		a[i] = j;
		used[j] =1;
		if(i == n){
			if(check()) in();
			
		}
		else Try(i+1);
		used[j] =0;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		Try(1);
	}
}
