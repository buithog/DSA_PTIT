#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int dem =0;
	stack<char> st;
	for(char x:s){
		if(st.empty() || x =='(' || x == '[')
		st.push(x);
		else {
			if(!st.empty() && x == ']'){
				if(st.top() == ')' || st.top() == '(')
				dem=dem;
				else {
				dem++;
				st.pop();}
			}
			if(!st.empty() && x == ')' && st.top() == '(') st.pop();
		}
	}
	cout<<dem<<endl;
}
