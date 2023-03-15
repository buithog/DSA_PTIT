#include<bits/stdc++.h>
using namespace std;
int a[1000],n,k,ok;
vector<string> b;
void khoitao(){
	cin>>n>>k;
	set<string> s;
	for(int i=0;i<n;i++){
		string x; cin>>x;
		s.insert(x);
	}
	for(auto x : s) b.push_back(x);
	ok=1;
	n = b.size();
	for(int i=1;i <= k;i++){
		a[i] =i;
	}
}
void sinh(){
	int i=k;
	while(i >= 1 && a[i] == n-k+i){
		i--;
	}
	if(i == 0) { 
	ok=0;
	}
	else {
	a[i]++;
	for(int j=i+1;j<=k;j++){
		a[j] = a[j-1] +1;
	}
	}
}
void in(){
	for(int i=1;i<=k;i++){
		cout<<b[ a[i] -1 ]<<" ";
	}
	cout<<endl;
}
int main(){
	khoitao();
	while(ok){
		in();
		sinh();
		}
	}

