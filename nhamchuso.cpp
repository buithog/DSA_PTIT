#include<bits/stdc++.h>
using namespace std;
long findmax(string &a, string &b){
	string q=a;string l=b;
	for(int i=0;i<q.length();i++){
		if(q[i] == '5') q[i] ='6';
	}
	for(int i=0;i<l.length();i++){
		if(l[i] == '5') l[i] ='6';
	}
	long ans= stoll(q) +stoll(l);
	return ans;
}
long findmin(string &a, string &b){
	string q=a;string l=b;
	for(int i=0;i<q.length();i++){
		if(q[i] == '6') q[i] ='5';
	}
	for(int i=0;i<l.length();i++){
		if(l[i] == '6') l[i] ='5';
	}
	long ans= stoll(q) +stoll(l);
	return ans;
}
int main(){
		string s,y; 
		cin>>s>>y;
		cout<<findmin(s,y)<<" "<<findmax(s,y)<<endl;
	}

