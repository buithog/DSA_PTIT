#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int ok=1;
		string s;
		cin>>s;
		int a[1000];
		for(int i=0;i<s.length();i++){
			a['s[i]']++;
		}
		for(int i=0;i<s.length();i++){
			if(a['s[i]'] > s.length()/2){
				ok=-1; break;
			}
		}
		cout<<ok<<endl;
	}
}
