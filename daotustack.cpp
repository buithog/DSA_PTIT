#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin.ignore();
		getline(cin,s);
		stack<string> st;
		stringstream ss(s);
		string token;
		while(ss>>token){
			st.push(token);
		}
		while(st.size() > 2){
			cout<<st.top()<<" ";
			st.pop();
		}
		cout<<st.top();
		st.pop();
		cout<<endl;
	}
}
