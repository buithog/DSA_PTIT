#include<bits/stdc++.h>
using namespace std;
int m=1e9+7;
struct Matran{
	long long a[2][2];
};
Matran operator *(Matran A, Matran B){
	Matran C; int i,j,k;
	for(i=0;i<=1;i++)
		for(j=0;j<=1;j++){
			C.a[i][j] =0;
			for(k=0;k<=1;k++)
				C.a[i][j] = (C.a[i][j] +(A.a[i][k] * B.a[k][j])%m)%m;
	}
	return C;
}
Matran luythua(Matran X,int n){
	if(n==1) return X;
	Matran A = luythua(X,n/2);
	if(n%2 == 0) return A*A;
	return X*A*A;
}
int main(){
	int t,n;
	cin>>t;
	Matran X; X.a[0][0] =0; X.a[1][0] = 1; X.a[0][1] =1;X.a[1][1] =1;
	while(t--){
		cin>>n;
		Matran KQ = luythua(X,n-1);
		cout<<KQ.a[1][1]<<endl;
		
	}
}
