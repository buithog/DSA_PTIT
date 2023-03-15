#include <bits/stdc++.h>
using namespace std;
string s;
// mai yeu Dat
void sinhcauhinh()
{
	int i=s.size()-1;
    while(i >= 0 && s[i] == '0'){
        s[i] ='1';
        i--;
    }
    if(i== -1 ) for(int i=0;i<s.size();i++) s[i] ='1';
    else s[i] ='0';
	}
void xuat()
{
    cout << s << endl;
}
main()
{
    int n;
    cin >> n;
    while (n--)
    {
        cin >> s;
        sinhcauhinh();
        xuat();
    }
}
