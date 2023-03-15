#include<bits/stdc++.h>;
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int m,n,k;
		cin>>m>>n>>k;
		int res=0;
		if(k>m) res=-1;
		int nm=n-n/7;
		if(k*n >nm*m) res=-1;
		else {
			if(k*n%m == 0) res=k*n/m;
			else res=k*n/m+1;
		}
		cout<<res<<endl;
	}
}
