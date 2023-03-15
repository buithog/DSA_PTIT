#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		map<int ,int> mp;
		long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
		}
		cout<<mp[0]<<endl;
	}
}
