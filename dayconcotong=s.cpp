#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void preProcess()
{
}
ll n,i, k, a[101], b[101], flag;
void Try(int pos_a, int pos_b, int s)
{
    for ( i = pos_a + 1; i <= n; i++)
    {
        if (a[i] + s == k)
        {
            flag = 1;
            b[pos_b + 1] = a[i];
            cout << "[" << b[0];
            for (int j = 1; j <= pos_b + 1; j++)
                cout << " " << b[j];
            cout << "] ";
            return;
        }
        else if (s + a[i] < k)
        {
            b[pos_b + 1] = a[i];
            Try(i, pos_b + 1, s + a[i]);
        }
    }
}
void solve()
{
    flag = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    Try(0, 1, 0);
    if (flag == 0)
        cout << -1 << endl;
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    preProcess();

    ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
