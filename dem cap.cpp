#include<bits/stdc++.h>
using namespace std;
int count(int b[], int k , int x , int cnt[] ){
	if(x == 0) return 0;
	if(x == 1 ) return cnt[0];
	int res =(cnt[0] + cnt[1]);
	auto it = upper_bound(b,b+k,x);
	 res += (b+k) - it ;
	if( x == 2 ) res -= (cnt[3] +cnt[4]);
	if( x == 3 ) res += cnt[2];
	return res;
}
int main(){
	int t; cin>> t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int a[n],b[k],cnt[5];
		memset(cnt,0,sizeof(cnt));
		for( int i =0;i<n;i++) cin>>a[i];
		for( int i = 0 ;i<k;i++){
			cin>>b[i];
			if(b[i] <= 4 ) cnt[b[i]]++;
		} 
		sort(b, b+n);
		int ans = 0;
		for(int i =0;i<n;i++) {
			ans +=  count(b,k,a[i],cnt);
		}
		cout<<ans<<endl;
	}
}
