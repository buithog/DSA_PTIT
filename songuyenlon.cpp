#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while (t--){
		string n,s;
		int res=0;
		cin>>n;
		cin>>s;
		int a[100][100];
		memset(a, 0, sizeof(a));
		for (int i = 1; i <= n.size(); i++) {
			for (int j = 1;j <=s.size();j++) {
				if (n[i - 1] == s[j - 1]) a[i][j] = a[i - 1][j - 1] + 1;
				else
				a[i][j] = max(a[i - 1][j],a[i][j - 1]);
				res = max(res,a[i][j]);
			}
		}
		cout<<res<<endl;
	}
}
