#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
#ifdef _DEBUG
 freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif
 
 int t;
 cin >> t;
 while (t--) {
  int n, m;
  string s;
  cin >> n >> m >> s;
  vector<int> pref(n);
  for (int i = 0; i < m; ++i) {
   int p;
   cin >> p;
   ++pref[p - 1];
  }
  for (int i = n - 1; i > 0; --i) {
   pref[i - 1] += pref[i];
  }
  vector<int> ans(26);
  for (int i = 0; i < n; ++i) {
   ans[s[i] - 'a'] += pref[i];
   ++ans[s[i] - 'a'];
  }
  for (int i = 0; i < 26; ++i) {
   cout << ans[i] << " ";
  }
  cout << endl;
 }
 
 return 0;
}