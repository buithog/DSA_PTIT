#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int dem =0;
	while(t--){
		string s;
		cin>>s;
		dem ++;
		stack<int> st;
		cout<<"Test "<<dem<<": ";
		for(int i=0;i<=s.size();i++){
			if(s[i] == 'I' || i == s.size()){
				cout<<i+1;
				while(!st.empty()){
					cout<<st.top();
					st.pop();
				}
			}
			else if(s[i] == 'D') st.push(i+1);
		}
		cout<<endl;
	}
}
