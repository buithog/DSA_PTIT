#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		long a[n+k];
		map<int ,int> mp;
		for(int i=0;i<n+k;i++){
			cin>>a[i];
			mp[a[i]]++;
			}
		for(auto  x: mp){
		 cout<< x.first <<" ";
		}
		cout<<endl;
		for(auto x:mp){
		if(x.second >=2) cout<<x.first<<" ";
		}
		cout<<endl;
		}
		return 0;
		}
