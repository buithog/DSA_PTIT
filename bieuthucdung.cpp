#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int dem=0,res=0;
		stack<char> q;
		for(int i=0;i<s.size();i++){
			if(s[i] == '(') {
				q.push(s[i]);
				dem=0;
			}
			if(s[i] ==')'){
				dem++;
				res=max(dem,res);
				if(!q.empty()) q.pop();
				else{
				res = -1;
				dem=-1;
				break;
				}
			}
			
		}
		if(!q.empty()) cout<<-1<<endl;
		else 
		cout<<res<<endl;
	}
}
