#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],f[10005];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int res=1;
		for(int i=0;i<n;i++){
			f[i] =0;
			for(int j=0;j<i;j++){
				if(a[j] < a[i]) f[i] =max(f[i],f[j]+1);
			}
			res=max(res,f[i]);
		}
		cout<<n-res<<endl;
	}
}
