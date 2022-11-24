/*input
4
3
1 5 3
5
2 2 2 2 2
6
1 6 2 5 2 10
5
1 6 2 5 1
*/
 
// Nihesh Anderson - knandy
 
#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp> 
//#include <ext/pb_ds/tree_policy.hpp> 
 
//using namespace __gnu_pbds;
using namespace std;
vector<int> v, mark;
int n;
 
int cost(int pos) {
  if(pos == 0 || pos == n - 1) return 0;
  return (v[pos] > v[pos - 1] && v[pos] > v[pos + 1]) || (v[pos] < v[pos - 1] && v[pos] < v[pos + 1]);  
}
 
int main(){
  //fast_cin();
  // freopen("input.in","r",stdin);
  // freopen("output.out","w",stdout);
  int t; cin >> t;
  while(t--) {
    cin >> n;
    v.clear(); 
    v.resize(n);
    for(int i = 0; i < n; i++) {
      cin >> v[i];
    }
    int sum = 0, ans = 0;
    for(int i = 1; i < n - 1; i++) {
      sum += cost(i);
    }
    ans = sum;
    for(int i = 1; i < n - 1; i++) {
      int old = v[i];
      int base = cost(i) + cost(i - 1) + cost(i + 1);
      v[i] = v[i - 1];
      ans = min(ans, sum - base + cost(i) + cost(i - 1) + cost(i + 1));
      v[i] = v[i + 1];
      ans = min(ans, sum - base + cost(i) + cost(i - 1) + cost(i + 1));
      v[i] = old;
    }
    cout << ans << endl;
  }
  return 0;
}