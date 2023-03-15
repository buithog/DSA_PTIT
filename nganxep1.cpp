#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	string s;
	int x;
	stack<int> st;
	while(t--){
		cin>>s;
		if(s == "PUSH") {
			cin>>x;
			st.push(x);
		}
		if(s == "PRINT" ){
		if(st.empty()){
		cout<<"NONE"<<endl;
		}
		else{
		cout<<st.top()<<" ";
		}
	}
		if(s == "POP") if(!st.empty()) st.pop();
	
}
}
