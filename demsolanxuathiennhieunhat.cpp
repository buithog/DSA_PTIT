#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long a[n];
		map<int,int> mp;
		for(int i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
			}
		int max=n/2,x=0;
		
		for(int i=0;i<n;i++){
			if(mp[a[i]] > max){ max= mp[a[i]]; x=i;}
			}
		if(max <= n/2) cout<<"NO"<<endl;
		else cout<<a[x]<<endl;
		}
	}
