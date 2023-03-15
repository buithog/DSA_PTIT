#include <bits/stdc++.h>
using namespace std;
int n, A[21], B[21]={0},c[21];
int cnt;
int Check(){
	for(int i=1;i<=n;i++){
		if(A[i]!=c[i]) return 0;
	}
	return cnt;
}
void in(){
	if(Check()) cout<<cnt<<endl;
}
void quaylui(int i){
	int j;
	for(j=1;j<=n;j++){
		if(!B[j]){
			A[i]=j; B[j]=1;
			if(i==n){
				cnt++;
				in();
			}
			else quaylui(i+1);
			B[j]=0;
		}
	}
}
main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		cnt=0;
		for(int i=1;i<=n;i++) cin>>c[i];
		quaylui(1);	
	}
}
