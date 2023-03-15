#include<bits/stdc++.h>
using namespace std;
int a[100],used[10],n,check=0;
void in(){
	if(check != 0) cout<<",";
	for(int i=1;i<=n;i++) cout<<a[i];
}
void quaylui(int i){
	for(int j=1;j<=n;j++){
		if(used[j] == 0){
			a[i] = j;
			used[j]=1;
			if(i == n) {in();check=1;}
		else quaylui(i+1);
		used[j] =0; 
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		quaylui(1);
		cout<<endl;
		check=0;
	}
}
