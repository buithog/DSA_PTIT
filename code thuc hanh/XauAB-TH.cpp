#include<bits/stdc++.h>
using namespace std;
int B[20],n,t,check=0;
void in(){
    if(check!=0) cout<<",";
	for(int i=1;i<=n;i++) if (B[i]==0) cout << 'A';
	else cout << 'B';
} 
void TRY(int i){
	for(int j =0;j<=1;j++){
		B[i]=j;
		if (i==n) {in();check=1;}
		else TRY(i+1);
	}
}
int main() {
	cin >> t;
	while(t--){
	    check =0;
		cin >> n;
		TRY(1);
		cout << endl;
	}
}
