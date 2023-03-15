#include  <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while (t--){
		int n;cin>>n;
		int a[n];
		set<int > s;
		for (int i=0 ;i<n ;i++) {
			int x;
			cin>>x;
			while(x){
				s.insert(x%10);
                x/=10;
			}			
		}
	for(int i : s)	{
		cout <<i<<" ";
	}
	cout <<endl;	
	}
}
