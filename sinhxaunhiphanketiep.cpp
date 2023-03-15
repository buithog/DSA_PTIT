#include <bits/stdc++.h>
using namespace std;
string s;
void sinh(){
    int ok = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            ok = 1;
            s[i] = '1';
            for (int j = i + 1; j < s.length(); j++)
                s[j] = '0';
            break;
        }
    }
    if (ok == 0)
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = '0';
        }
}
void in()
{
    cout << s << endl;
}
main()
{
    int t;
    cin >> t;
    while (t--){
        cin >> s;
        sinh();
        in();
    }
}
