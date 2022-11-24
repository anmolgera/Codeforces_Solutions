#include<bits/stdc++.h>
 
using namespace std;
 
#define fore(i, l, r) for(int i = int(l); i < int(r); i++)
 
typedef long long li;
typedef double ld;
typedef pair<int, int> pt;
 
li d;
 
inline bool read() {
 if(!(cin >> d))
  return false;
 return true;
}
 
inline void solve() {
 if(d == 0) {
  cout << "Y " << 0.0 << " " << 0.0 << endl;
  return;
 }
 if(d < 4) {
  cout << "N" << endl;
  return;
 }
 
 ld D = sqrt(d * li(d - 4));
 ld a = (d + D) / 2.0;
 ld b = (d - D) / 2.0;
 
 cout << "Y " << a << " " << b << endl;
}
 
int main() {
#ifdef _DEBUG
 freopen("input.txt", "r", stdin);
 int tt = clock();
#endif
 cout << fixed << setprecision(9);
 
 int tc = 1;
 assert(cin >> tc);
 
 while(tc--) {
  assert(read());
  solve();
  
#ifdef _DEBUG
  cerr << "TIME = " << clock() - tt << endl;
  tt = clock();
#endif
 }
 return 0;
}