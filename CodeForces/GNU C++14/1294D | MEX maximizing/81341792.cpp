#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
#ifdef _DEBUG
 freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif
 
 int q, x;
 cin >> q >> x;
 vector<int> mods(x);
 
 set<pair<int, int>> vals;
 for (int i = 0; i < x; ++i) {
  vals.insert(make_pair(mods[i], i));
 }
 
 for (int i = 0; i < q; ++i) {
  int cur;
  cin >> cur;
  cur %= x;
  vals.erase(make_pair(mods[cur], cur));
  ++mods[cur];
  vals.insert(make_pair(mods[cur], cur));
  cout << vals.begin()->first * x + vals.begin()->second << endl;
 }
 
 return 0;
}