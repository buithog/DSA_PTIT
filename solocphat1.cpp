#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		string s;
		queue<string > q;
		cin>>n;
		vector<string> v;
		q.push("6");
		q.push("8");
		v.push_back("6");
		v.push_back("8");
		while(1){
			s= q.front();
			q.pop();
			if(s.size() >= n) break;
			q.push(s+"6");
			q.push(s+"8");
			v.push_back(s+"6");
			v.push_back(s+"8");
		}
		cout<<v.size()<<endl;
		for(int i= v.size() -1; i>=0;i--) cout<<v[i]<<" ";
		cout<<endl;
	}
}
