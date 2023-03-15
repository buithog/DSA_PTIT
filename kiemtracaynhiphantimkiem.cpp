#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int ans=1;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(i != 0) if(a[i] <= a[i-1]) ans=0;
		}
		cout<<ans<<endl;
	}
}
