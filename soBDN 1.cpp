#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		int dem=0;
		cin>>n;
		queue<long long> q;
		q.push(1);
		while(1){
			long long s =q.front();
			q.pop();
			if(s <= n)
			dem++;
			else break;
						q.push(s*10);
			q.push(s*10+1);
		}
		cout<<dem<<endl;
	}
}
