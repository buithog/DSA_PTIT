#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int k;
		cin>>k;
		string s;
		map<char,int> mp;
		cin>>s;
		if(k > s.length()){
			cout<<"0"<<endl;
			continue;
		} 
		for(int i=0;i<s.length();i++){
			mp[s[i]]++;
		}
		priority_queue <int> q;
		for(char i = 'A'; i<='Z';i++){
			if(mp[i] != 0) q.push(mp[i]);
		}
		while(k>0){
			int x = q.top();
			q.pop();
			k--;
			x--;
			q.push(x);
		}
		int tong=0;		
	while(q.size() > 0){
		int x=q.top();
		tong += x*x;
		q.pop();
	}
	cout<<tong<<endl;	
	}
}
