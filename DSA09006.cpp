#include<bits/stdc++.h>
using namespace std;
int parent[1001];
bool vs[1001];
vector<int> a[1001];
void DFS(int u){
	vs[u] = true;
	for(int x : a[u]){
		if(!vs[x]){
			parent[x] = u;
			DFS(x);
		}
	}
}
void path(int s,int k){
	memset(parent,0,sizeof(parent));
	vector<int > res;
	DFS(s);
	if(!vs[k]){
		cout<<-1<<endl;
	}
	else{
		while(k != s ){
			res.push_back(k);
			k= parent[k];
		}
		res.push_back(s);
		reverse(res.begin(),res.end());
		for(auto x: res){
			cout<<x<<" ";
		}	
		cout<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		for(int i=0;i<1001;i++) a[i].clear();
		memset(vs,false,sizeof(vs));
		int n,m,s,k;
		cin>>n>>m>>s>>k;
		for(int i=0;i<m;i++){
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		path(s,k);
	}
	return 0;
}
