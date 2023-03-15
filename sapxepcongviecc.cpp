#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
	return a.second<b.second;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		pair<int,int> a;
	
		int n, res=1,index=0;
		cin>>n;
			vector <pair <int,int> > v(n);
		for(int i=0;i<n;i++){
			cin>>v[i].first;
			cin>>v[i].second;
		}
		sort(v.begin(),v.end(),cmp);
		for(int i=1;i<v.size();i++){
			if(v[i].first  >= v[index].second) {
				res++; index=i;
			}
		}
		cout<<res<<endl;
	}
}

