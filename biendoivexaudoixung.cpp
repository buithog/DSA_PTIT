#include<bits/stdc++.h>
using namespace std;
int test(string s, int n) {
	int f[100][100];
	memset(f, 0,sizeof(f));
	for (int i = 0; i < n; i++)f[i][i] = 1;
	for (int i = n - 2; i >= 0; i--) {
		for (int j = i + 1; j < n; j++) {
			if (s[i] == s[j]) f[i][j] += f[i+1][j-1]+2;
			else {
				f[i][j] = max(f[i + 1][j] , f[i][j - 1]);
			}
		}
	}
	return n - f[0][n - 1];
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		cout << test(s, s.length()) << endl;
	}
}
