#include<bits/stdc++.h>
using namespace std;
vector<int> a[1001];
bool vs[10001];
void BFS(int u){
	queue<int> q;
	vs[u] = true;
	q.push(u);
	while(!q.empty()){
		int tmp = q.front();
		q.pop();
		for(int x : a[tmp]){
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
		memset(vs,false,sizeof(vs));
		int n,k;
		cin>>n>>k;
		for(int i=0;i<k;i++){
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		int cnt=0;
		for(int i =1;i<=n;i++){
			if(!vs[i]){
				cnt++;
				BFS(i);
			}
		}
		cout<<cnt<<endl;
	}
}
