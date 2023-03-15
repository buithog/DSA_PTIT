#include<bits/stdc++.h>
using namespace std;
int n,k,a[25],b[25];
vector<vector<int>> v;
void Try(int i,int pos,int sum){
	if(sum == k) {
		vector<int> res;
		for(int j=1;j<i;j++) res.push_back(b[j]);
		v.push_back(res);
	}
	for(int j=pos ;j<=n;j++){
		if(a[j] + sum <= k){
			b[i] = a[j];
			Try(i+1,j+1,sum+a[j]);
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		v.clear();
		cin>>n>>k;
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1);
		Try(1,1,0);
		if(v.size() == 0 ) cout<<-1;
		else{
		for(auto x : v){
				cout<<"[";
				for(int j=0 ; j < x.size() ; j++ ) {
					cout<<x[j];
					if (j != x.size() - 1) cout << " ";
					else cout << "] ";
				}
			}	
		}
		
		cout<<endl;
	}
}
