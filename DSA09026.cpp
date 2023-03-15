#include<bits/stdc++.h>
using namespace std;
vector<int> a[1001];
bool vst[1001];
int p[1001];
void BFS(int u){
	queue<int> q;
	q.push(u);
	vst[u] = true;
	while(!q.empty()){
		int tmp =  q.front();
		q.pop();
		vst[tmp] = true;
		for(auto j : a[tmp]){
			if(!vst[j]){
				q.push(j);
				vst[j] = true;
				p[j] =tmp;
			}
		}
	}
}
void path(int s, int d){
	memset(p,0,sizeof(p));
	vector<int> v;
//	v.clear();
	BFS(s);
	if(!vst[d]) cout<<-1;
	else{
		while(d != s){
			v.push_back(d);
			d = p[d];
		}
		v.push_back(s);
		reverse(v.begin(),v.end());
		for(auto z: v) cout<<z<<" ";
	}
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		for(int i=0;i<1001;i++) a[i].clear();
		memset(vst,false,sizeof(vst));
		int n,k,s,d;
		cin>>n>>k>>s>>d;
		for(int i=0;i<k;i++){
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
//			a[y].push_back(x);
		}
		path(s,d);
		cout<<endl;
	}
}
