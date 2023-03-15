#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        long long m, s;
        cin >> s >> m;
        if(s == 0 || s > 9 * m)
            cout << "-1";
        else if(m == 1 && s == 0)
            cout << 0;
        else {
            int a[m + 2];
            for(int i = 0; i < m; i ++){
                if(s >= 10){
                    a[i] = 9;
                    s -= 9;
                }
                else{
                    a[i] = s;
                    s = 0;
                }
            }
            if(a[m - 1] == 0){
               a[m - 1] = 1;
                for(int i = m - 2; i >= 0; i --){
                    if(a[i] != 0){
                        --a[i];
                        break;
                    }
                }
            }
            for(int i = m - 1; i >= 0; i--)    
                cout << a[i];
        }
        cout << endl;
    }
    return 0;
}
