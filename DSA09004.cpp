#include<bits/stdc++.h>
using namespace std;
bool vs[1000001];
vector<int> a[10001];
void dfs(int u){
	cout<<u<<" ";
	vs[u] = true;
	for(auto v: a[u]){
		if(!vs[v])
			dfs(v);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		for (int i=0; i<1001; i++) a[i].clear();
		int n,m,k;
		cin>>n>>m>>k;
		for(int i =0;i<m;i++){
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		memset(vs,false,sizeof(vs));
		dfs(k);
		cout<<endl;
	}
}

