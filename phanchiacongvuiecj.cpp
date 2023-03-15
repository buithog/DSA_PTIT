#include<bits/stdc++.h>
using namespace std;
struct Cv{
	int start,finish;
}
 a[1005];
bool cmp(Cv x,Cv y){
	return (x.finish <y.finish);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i].start;
		for(int i=0;i<n;i++) cin>>a[i].finish;
		sort(a,a+n,cmp);
		int ans =1;int i=0;
		for(int j=0;j<n;j++){
			if(a[j].start >= a[i].finish){
				ans++;i=j;
			}
		}
		cout<<ans<<endl;
	}
	 
}
