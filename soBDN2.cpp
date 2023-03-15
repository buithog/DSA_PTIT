#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		queue<long long> q;
		q.push(1);
		long ans;
		while(1){
			int x=q.front();
			if(x% n == 0 ) {
				ans=x;
				break;
			}
			q.pop();
			q.push(x*10+0);
			q.push(x*10 +1);
		}
		cout<<ans<<endl;
	}
}
