#include<bits/stdc++.h>
using namespace std;
int a[30],n,k,ok;
void sinh(){
	int i=k;
	while(i>=1 && a[i] == n-k+i){
		i--;
	}
	if(i == 0) { 
	ok=0;
	}
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j] = a[j-1] +1;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
	cin>>n>>k;
	int dem =0;
	ok=1;
	set<int> s;
	for(int i=1;i<=k;i++){
		cin>>a[i]; s.insert(a[i]);
	}
		sinh();
		for(int i=1;i<=k;i++){
			s.insert(a[i]);
		}
		if(s.size() - k == 0) cout<< k<<endl;
		else cout<<s.size() - k<<endl;
	}
}
