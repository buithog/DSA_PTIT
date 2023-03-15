#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long n,k;
		cin>>n>>k;
		long a[n];
		map<int ,int> mp;
		for(int i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
			}
		if(mp[k] >= 1) cout<<1<<endl;
		if(mp[k] == 0) cout<<-1<<endl;
		}
	return 0;
}
