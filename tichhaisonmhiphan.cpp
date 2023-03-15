#include<bits/stdc++.h>
using namespace std;
long long digit(string s){
	long long x=0;
	for(int i=0;i<s.size();i++){
		x = x*2 + s[i] - '0';
	}
	return x;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s,x;
		cin>>s>>x;
		cout<<digit(s)*digit(x)<<endl;
	}
}
