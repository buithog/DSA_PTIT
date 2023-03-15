#include<bits/stdc++.h>
using namespace std;
int main(){
	queue<int> q;
	int t;
	cin>>t;
	while(t--){
		string s;
		int x;
		
		cin>>s;
		if(s == "PUSH"){
		cin>>x;
		q.push(x);
		}
		if(s == "POP"){
			if(!q.empty()) q.pop();
		} 
		if(s == "PRINTFRONT"){
			if(q.empty()) cout<<"NONE"<<endl;
			else cout<<q.front()<<endl;
		}
	}
}
