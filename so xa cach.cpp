	#include<bits/stdc++.h>
	using namespace std;
	int check(int n , int a[] ){
		for(int i = 1 ; i < n ; i++){
			if(abs(a[i] - a[i-1]) == 1) return 0;
		}
		return 1;
	}
	int main(){
		int t ; cin>>t;
		while(t--){
			int a[10];
			int n;
			cin>>n;
			for(int i=0;i<=n;i++) a[i] = i+1;
			sort(a,a+n);
			do{
				if(check(n,a)) {
					for(int i = 0 ; i<n ; i++) cout<< a[i];
					cout<<endl;
				}
			}
			while(next_permutation(a,a+n));
			{
				if(check(n,a)) {
					for(int i = 0 ; i<n ; i++) cout<< a[i];
					cout<<endl;
				}
				
			}
		}
		return 0;
	}

