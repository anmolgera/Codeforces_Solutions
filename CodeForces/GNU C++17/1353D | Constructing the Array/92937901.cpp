#include <cmath>
#include <functional>
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <list>
#include <time.h>
#include <math.h>
#include <random>
#include <deque>
#include <queue>
#include <cassert>
#include <unordered_map>
#include <unordered_set>
#include <iomanip>
#include <bitset>
#include <sstream>
#include <chrono>
#include <cstring>
 
using namespace std;
 
typedef long long ll;
 
#ifdef iq
  mt19937 rnd(228);
#else
  mt19937 rnd(chrono::high_resolution_clock::now().time_since_epoch().count());
#endif
 
struct cmp {
  bool operator() (const pair<int, int> &a, const pair<int, int> &b) const {
    int lena = a.second - a.first + 1;
    int lenb = b.second - b.first + 1;
    if (lena == lenb) return a.first < b.first;
    return lena > lenb;
  }
};
 
int main() {
#ifdef iq
  freopen("a.in", "r", stdin);
#endif
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    set < pair <int, int> ,cmp> q;
    q.insert({0, n - 1});
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
      auto it = *q.begin();
      q.erase(q.begin());
      int l = it.first, r = it.second;
      int mid = ((l + r) / 2);
      a[mid] = i + 1;
      if (l < mid) q.insert({l, mid - 1});
      if (mid < r) q.insert( {mid + 1, r});
    }
    for (int i= 0; i < n; i++) cout << a[i] << ' ';
    cout << '\n';
  }
}