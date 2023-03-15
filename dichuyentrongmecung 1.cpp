#include<bits/stdc++.h>
using namespace std;
int a[100][100],n;
void quaylui(string s,int i,int j){
		if(a[0][0]==0||a[n-1][n-1]==0) return;
		if(i == n-1 && j== n-1 ) {
		cout<<s<<" ";
		return;
	}
	if(a[i+1][j] == 1 && i<n-1) quaylui(s+"D",i+1,j);
	if(a[i][j+1] == 1 && j<n-1) quaylui(s+"R",i,j+1);

}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s="";
		cin>>n;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		quaylui(s,0,0);
		cout<<endl;
	}
}
