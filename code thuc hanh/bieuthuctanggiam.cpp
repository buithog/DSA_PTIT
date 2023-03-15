#include<bits/stdc++.h>
using namespace std;

int main(){
		int t;
		cin>>t;
				int dem=1;
		while(t--){
			string s;
			cin>>s;
			stack<int>st;
	
			cout<<"Test"<< dem << ": ";
			for(int i=0;i<s.size();i++){
				if(s[i] == 'l' || i == s.size()){
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
