#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	set<int> s;
	int a[n];
    int b[10000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(b[a[i]] == 0){
		cout<<i<<" ";
		b[a[i]] =1;
		}
	}	
	cout<<endl;
}
