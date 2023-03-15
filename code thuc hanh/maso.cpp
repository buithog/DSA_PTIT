#include <bits/stdc++.h>
using namespace std;
int n,B[20]={0},a[10000];
string s = "";
vector <string> v;
vector<string> chu(n);
vector<vector<string>> x;
void quayluinp(int i){
	for(int j=0;j<n;j++){
		s[i] = i+'0';
		if(i == n) v.push_back(s);
		else quayluinp(i+1);
	}
}
void quaylui(int i){
	int j;
	for(int j=1;j<=n;j++){
		if(!B[j]){
			chu[i]=char(j+'A'-1); B[j]=1;
			if(i==n) x.push_back(chu);
			else quaylui(i+1);
			B[j]=0;
		}
	}
}

main(){
	cin>>n;
	quayluinp(1);
	quaylui(1);
	for
		for(int i=0;i<x.size();i++){
		for(int j=0;j<n;j++){
			cout<<x[i][j];
		}
		for(int j=0;j<v.size();j++){
			cout<<v[j];
		}
	}
}


