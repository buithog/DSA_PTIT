#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int> a[10001];
		for(int i =1 ;i<=k ;i++){
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
		}
		for(int i = 1;i<=n;i++){
			cout<<i<<": ";
			for(auto z:a[i]) cout<<z<<" ";
			cout<<endl;
		}
	}
	return 0;
}
