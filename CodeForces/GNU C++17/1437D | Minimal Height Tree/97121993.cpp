#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
 
#define pb push_back
#define int long long
#define ld long double
using namespace std;
const int M = 998244353;
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; i++) cin >> A[i];
        int ans = 1;
        int deti = 1;
        int omegadeti = 1;
        for (int i = 2; i < n; i++) {
            if (A[i] < A[i - 1]) {
                deti--;
                if (deti == 0) {
                    ans++;
                    deti = omegadeti;
                }
            } else {
                omegadeti++;
            }
        }
        cout << ans << '\n';
    }
}