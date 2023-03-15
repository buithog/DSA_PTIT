#include<bits/stdc++.h>
using namespace std;
vector<int> a[1001];
bool vs[1000001];
void DFS(int u){
	cout<<u<<" ";
	vs[u] = true;
	for( auto x: a[u]){
		if(!vs[x]){
			DFS(x);
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		for(int i=0;i<1001;i++) a[i].clear();
		memset(vs,false,sizeof(vs));
		int n,k,u;
		cin>>n>>k>>u;
		for(int i =0 ;i<k;i++){
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
		}
		DFS(u);
		cout<<endl;
	}
}
