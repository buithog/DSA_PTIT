#include<bits/stdc++.h>
using namespace std;
vector<int> a[1001];
bool vs[100001];
void BFS(int u){
	queue<int> q;
	q.push(u);
	vs[u] = true;
	while(!q.empty()){
		int tmp = q.front();
		q.pop();
		cout<<tmp<<" ";
		for(auto x : a[tmp]){
			if(!vs[x]){
				q.push(x);
				vs[x] = true;
			}
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		for(int i=0;i<1001;i++) a[i].clear();
		memset(vs,false, sizeof(vs));
		int n,k,u;
		cin>>n>>k>>u;
		for(int i=0;i<k;i++){
			int x, y;
			cin>>x>>y;
			a[x].push_back(y);
		}
		BFS(u);
		cout<<endl;
	}
}
