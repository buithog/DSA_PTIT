#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<char> st;
		bool ok = true;
		for(int i=0;i<s.size();i++){
			if( s[i] == '{' || s[i] == '[' || s[i] =='(' ) st.push(s[i]); 
			else{
			if(!st.empty() && s[i] == ')') if( st.top() == '(') {
				st.pop();
			}
			else { 
			ok=false;
			}
			if(!st.empty() && s[i] == '}') if( st.top() == '{') {
			st.pop();
			}
			else ok=false;
			if(!st.empty() && s[i] == ']') if(  st.top() == '['){
				st.pop();
			}
			else ok=false;
			}
			if(!ok) break;
	}
	if(!st.empty()) cout<<"false"<<endl;
	else cout<<"true"<<endl;
	}
}
