#include<bits/stdc++.h>
using namespace std;
int n,ok;
vector<int > a(n,0);
vector<vector<int>> v;
void khoitao(){
	for(int i=0;i<=n;i++){
		a.push_back(i);
	}
}
void sinh(){
	int i=n-1;
	while(i>0 && a[i] > a[i+1]){
		i--;
	}
	if(i == 0 ) ok=0;
	else {
		int j=n;
		while(a[i] > a[j]) j--;
		swap(a[i],a[j]);
		int l=i+1,r=n;
		while(l<r){
			swap(a[l],a[r]);
			l++;r--;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
	cin>>n;
	v.clear();
	ok=1;
	khoitao();
	while(ok){
		v.push_back(a);
		sinh();
	}
	for(int i = v.size()-1;i >=0;i--){
		for(int j=1;j <= n;j++){
			cout<<v[i][j];
		}
		cout<<" ";
	}
	cout<<endl;
	ok=1;
	a.clear();
}
}
