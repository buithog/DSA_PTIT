#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,x;
		vector<int>v;
		cin>>n>>k>>x;
		int a[n],b[k],c[x];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<k;i++) cin>>b[i];
		for(int i=0;i<x;i++) cin>>c[i];
		int id1=0,id2=0,id3=0;
		while(id1<n&&id2<k&&id3<x){
			if(a[id1] == b[id2]&& b[id2] == c[id3]) {
				v.push_back(a[id1]);
				id1++;id2++;id3++;
				continue;
			}
			if (a[id1] < b[id2] || a[id1] < c[id3]){
			            id1++;
			            continue;
			        }
			if (b[id2] < c[id3] || b[id2] < a[id3]){
			            id2++;
			            continue;
			        }
			if (c[id3] < a[id1] || c[id3] < b[id2]){
			            id3++;
			            continue;
			        }
			    }
		if(v.size() == 0) cout<<-1<<endl;
		else
		for(auto x:v) cout<<x<<" ";
		cout<<endl;
	}
}
