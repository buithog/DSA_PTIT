#include<bits/stdc++.h>
using namespace std;
bool OK;
void Try(int a[][100],string s,int n,int x,int y){
	if(a[0][0]==0||a[n-1][n-1]==0) return;
	if(x==n-1&&y==n-1){
		OK=true;
		cout<<s<<" ";
		return;
	}
	if(a[x+1][y]==1&&x<n){
		 Try(a,s+"D",n,x+1,y);
	}
	if(a[x][y+1]==1&&y<n){
		 Try(a,s+"R",n,x,y+1);
	}
}
int main() {
	int d;
	cin>>d;
	while(d--){
		int n;
		cin>>n;
		int a[100][100];
		for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
		}
		OK=false;
		string s="";
		Try(a,s,n,0,0);
		cout<<endl;
		if(OK==false) cout<<"-1\n";
	}
}
