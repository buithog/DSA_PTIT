#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		vector<int> v;
		for(int i=0;i<=n-k;i++){
			int maxx=a[i];
			for(int j=i;j<i+k;j++){
				maxx=max(maxx,a[j]);
			}
			v.push_back(maxx);
		}
		for(auto x:v) cout<<x<<" ";
		cout<<endl;
		
	}
}
