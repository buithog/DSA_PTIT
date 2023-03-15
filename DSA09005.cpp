#include<bits/stdc++.h>
using namespace std;
bool vs[1000001];
vector<int> a[10001];
void BFS(int u){
	queue<int> q;
	 q.push(u);
	 vs[u] = true;
	 while(!q.empty()){
	 	int tmp =  q.front();
	 	q.pop();
		cout<<tmp<<" ";
		for( auto x : a[tmp]){
			if(!vs[x]){
			q.push(x);
			vs[x] = true;
			}
		}
	 }
	 cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		for(int i = 0;i<10001;i++) a[i].clear();
		memset(vs,false,sizeof(vs));
		int n,k,p;
		cin>>n>>k>>p;
		for(int i=0;i<k;i++){
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		BFS(p);
	}
}
