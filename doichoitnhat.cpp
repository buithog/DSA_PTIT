#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			}
		int tmp=0;
		for(int i=0;i<n-1;i++){
			int min = i;
			for(int j=i+1;j<n;j++){
					if(a[j]<a[min]) min= j;
					}
				swap(a[i],a[min]);if(min != i) tmp++;
				}
			cout<<tmp<<endl;
			}
		}
