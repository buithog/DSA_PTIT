#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b){
	if(a.second == b.second) return a.first< b.first;
	return a.second > b.second;
	}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<pair<int,int>> v(n);
		long a[100000] = {};
		for(int i=0;i<n;i++){
			int x;cin>>x;
			v[i].first =x;
			a[x]++;
			}
		for(int i=0;i<n;i++){
			v[i].second = a[v[i].first];
			}
		sort(v.begin(),v.end(),cmp);
		for(int i=0;i<n;i++){
			cout<< v[i].first <<" ";
			}
			cout<<endl;
		}
	}
