#include <bits/stdc++.h>
using namespace std;
int n,k;
string a;
vector<string> v;
void check(){
	int ok=0;
	for(int i=0;i<n-k+1;i++){
		int count=0;
		for(int j=i;j<i+k;j++){
			if(a[j]=='A') count++;
		}
		if(count == k) ok++;
	}
	if( ok==1) v.push_back(a);
}
void ql(int i){
	for(char j='A';j<='B';j++){
		a[i]=j;
		if(i == n-1) check();
		else ql(i+1);
	}
}
int main(){
	cin>>n>>k;
	a.resize(n);
	ql(0);
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
	return 0;
}
