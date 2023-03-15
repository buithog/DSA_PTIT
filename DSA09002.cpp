#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	vector<pair<int,int>> v;
	cin.ignore();
	for(int i = 1; i<=t ; i++){
		string s;
		getline(cin,s);
		stringstream ss(s);
		string num;
		while(ss >> num){
			if(stoi(num) > i) 	v.push_back({i,stoi(num)});
		}
	}
	for(auto x: v){
		cout<<x.first<<" "<<x.second<<endl;
	}
}

