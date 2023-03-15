#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string res,s;
		cin>>s;
		res+= s[0];
		for(int i=1;i<s.length();i++){
			res+=to_string((s[i-1] -'0') ^ (s[i] -'0'));
		}
		cout<<res<<endl;
	}
}
