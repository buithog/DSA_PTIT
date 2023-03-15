#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		vector<int> v;
		if(n ==1) {
		cout<<1<<endl;
		continue;
		}
		if(n<10){
		cout<< n+10<<endl;
		continue;
		}
		if(n>=10){
			int x=9;
			while(n>1 && x>1){
				if(n%x == 0){
					v.push_back(x);
					n = n/x;
					x++;
				}
					x--;
			}
		}
		if(n>10) {
		cout<<"-1/n"<<endl;
		continue;
		}
		reverse(v.begin(),v.end());
		for(auto x:v) cout<<x;
		cout<<endl;
		v.clear();
	}
	
}
