#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v;
		while(n>=4){
			if(n%7==0){
				v.push_back(7);
				n-=7;
				continue;
			}
			if(n >= 4){
				v.push_back(4);
				n-=4;
				continue;
			}
		}
	if(n == 0 ){
		for(auto x:v) cout<<x;
	cout<<endl;
		}
	else cout<<"-1"<<endl;
	}
}