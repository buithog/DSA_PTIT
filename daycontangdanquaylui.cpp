#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<string> v;
int n,a[25],x[25];
void Try(int i,int pos){
	for(int j = pos ; j<=n;j++){
		if(a[j] > x[i-1]) {
			x[i] = a[j];
			if(i >= 2)  {
				string s = "";
				for(int k =1 ; k<= i;k++) s+= to_string(x[k]) + " ";
				v.push_back(s);
			}
			Try(i+1,j+1);
		}
	}
		
}

int main() {
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	Try(1,1);
	sort(v.begin(),v.end());
	for(string x : v) cout<<x<<endl;
}
