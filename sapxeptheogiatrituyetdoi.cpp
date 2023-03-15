#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long n,k;
		cin>>n>>k;
		vector<int > v;
		for(int i=0;i<n;i++){
			int x;cin>>x;
			v.push_back(abs(k-x));
			v[i][1] = x;
		}
		sort(v.begin(),v.end());
	}
	return 0;
}
