#include<bits/stdc++.h>
using namespace std;
int n,a[30],k;

vector<string> v ;

void in(){
	for(int i=1;i<= k ; i++){
		cout<<v[a[i] -1 ]<<" ";
	}
	cout<<endl;
}

void Try(int i){
	for(int j = a[i-1] +1 ; j <= n-k+i ; j++){
		a[i] = j;
		if(i == k ) in();
		else Try(i+1);
	}
}
int main(){
	int n1;
	cin>>n1>>k;
	set<string> s1;
	for(int i=0;i<n1;i++) {
		string s; cin>>s;
		s1.insert(s);
	}
	n =  s1.size();
	for(auto x : s1 ){
		v.push_back(x);
	}
	Try(1);
}
