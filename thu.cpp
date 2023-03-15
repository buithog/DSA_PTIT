#include<bits/stdc++.h>
using namespace std;
int a[20],n,k;
string s="";
void in(){
	for(int i=0;i<=k;i++){
		cout<<s[a[i] ];
	}
	cout<<endl;
}
void Try(int i){
	for(int j  = a[i-1] ;  j < n-k+i ; j++){
		a[i] = j;
		if(i == k) in();
		else Try(i+1);
	}
}
int main(){
	char x;
	cin>>x>>k;
	for(int i='A';i<=x;i++){
		s+=i;
	}
	n = s.size();
	Try(0);
	for(int i=1;i<=k;i++){
		cout<<s[a[i] ];
	}
}
