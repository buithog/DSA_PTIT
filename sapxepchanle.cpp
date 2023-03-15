#include <bits/stdc++.h>
using namespace std;
int main(){
 	long n;
 	cin>>n;
 	long a[n];  long b[n];
 	for(int i=0;i<n;i++){
 		cin>>a[i]; a[i]=b[i];
		 }
 	   sort(b,b+n);
    int l=0,r=n-1;
    for(int i=n-1;i>=0;i--){
            if(i%2 !=0){
            a[i]=b[r];
            r--;
            }
            else{
                a[i]=b[l];
                l++;
            }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

