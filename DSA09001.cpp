#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int> a[1000];
		for(int i=0;i<k;i++){
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		for(int i =1;i<=n;i++){
			cout<<i<<": "
			for(x :) cout<<a[i][j]<<" ";
			cout<<endl;
		}
	}
}
