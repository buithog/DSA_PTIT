#include<bits/stdc++.h>
using namespace std;
int n,k,a[20];
vector <string > v;
string s;
void Try(int i ) {
	for(int j =  a[i-1] + 1 ; j <= n-k+i ; j++){
		a[i] = j;
		if( i == k) {
			string res = "";
			for(int x = 1; x<= k ;x++) res += s[ a[x] -1 ];
			v.push_back(res);
		}
		else Try(i+1);
	}
}
int main(){
	int t;cin>>t;
	while(t-- ){
		cin>>k>>s;
		n = s.size();
		Try(1);
		for(auto x: v) cout<<x<<" ";
	}
}
