#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		map<int,int> b;
		int max=0;
		int min=100000;
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[a[i]]++;
			if(a[i]>max) max =a[i];
			if(a[i]<min) min=a[i];
			}
		int tmp=0;
		for(int i=min;i<max;i++){
			if(b[i] == 0) tmp++;
			}
		cout<<tmp<<endl;
		}
	}
