#include<bits/stdc++.h>
using namespace std;
long long m=1e9+7;
long long n,k;
struct Mt{
	long long a[30][30];
};
Mt tong(Mt x, Mt y){
	Mt ans;
	for(int i=0;i<=n;i++){
		for(int j=0;j<n;j++){
			ans.a[i][j] =0;
		for(int k=0;k<n;k++){
		ans.a[i][j]= (ans.a[i][j] +x.a[i][k] * y.a[k][j] %m)%m;
			}
		}
	}
	return ans;
}
Mt ketqua(Mt x,long long k){
	if(k==1) return x;
	if(k%2 == 0) return ketqua(tong(x,x),k/2);
	else return tong(x,ketqua(tong(x,x),k/2));
}
void xuli(){
	cin>>n>>k;
	Mt x;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>x.a[i][j];
		}
	}
			Mt y = ketqua(x,k);
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					cout<<y.a[i][j];
					cout<<" ";
				}
				cout<<endl;
			}
}
int main(){
	int t;cin>>t;
	while(t--){
		xuli();
	}
}
