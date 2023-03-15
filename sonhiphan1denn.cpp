#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		queue<string> q;
		vector<string > v;
		q.push("1");
		v.push_back("1");
		while(v.size()<10000){
			string s =q.front();
			q.push(s+"0");
			q.push(s+"1");
			v.push_back(s+"0");
			v.push_back(s+"1");
			q.pop();
		}
		for(int i=0;i<n;i++) cout<<v[i]<<" ";
		cout<<endl;
	}
}
