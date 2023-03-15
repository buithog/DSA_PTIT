#include<bits/stdc++.h>
using namespace std;
int n,k,b[30],s,dem;
void xuly(){
	int t;
	for(int i=1;i<=k;i++) t+=b[i];
	if( t== s) dem++;
	}
void quaylui(int i){
	int j;
	for(j=b[i-1]+1;j<=n-k+1;j++){
		b[i] = j;
		if(i == k) xuly();
		else quaylui(i+1);
		}
	}
int main(){
	while(1){
	cin>>n>>k>>s;
	if(n==0&&k==0&&s==0){
		break;
		}
	b[0] = 0;
	quaylui(1);
	cout<<dem<<endl;
		}
	}
