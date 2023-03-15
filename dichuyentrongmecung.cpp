#include<bits/stdc++.h>
using namespace std;
int a[15][15],n,ok;
string s;
void in(int k){
	for(int i=1;i<=k;i++) cout<<s[i]<<" ";
}
void quaylui(int i,int j,int k){
	if(i==n&&j==n){
		in(k);
		return ;
	}
	if(i<n && a[i+1][j] == 1){
		s[k] = 'D';
		quaylui(i+1,j,k+1);
	}
}
int main(){
	int t,i,j;
	cin>>t;
	while(t--){
		cin>>n;
		for(i=1;i<=n;i++){for(j=1;j<=n;j++) cin>>a[i][j];
		}
		if(a[1][1] == 0) cout<<"-1"<<endl;
		else{
			ok=0;
			quaylui(1,1,1);
			if(!ok)cout<<"-1"<<endl;
		}
	}
	}
