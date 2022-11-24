/**
 * Written by : Ujjawal Pabreja [cuber_coder]
 * Email : ujjawalpabreja99@gmail.com
*/
#include <bits/stdc++.h> 
using namespace std;
#define int long long
#define ll long long
#define ld long double
#define endl "\n"
const int mod = 1e9 + 7;
const int MAX = 2e5 + 1;
vector <ll> fact(MAX);
ll add(ll x, ll y) {
    return ((x % mod) + (y % mod)) % mod;
}
ll mul(ll x, ll y) {
    return ((x % mod) * (y % mod)) % mod;
}
ll sub(ll x, ll y) {
    return ((x % mod) - (y % mod) + mod) % mod;
}
ll power(ll x, ll p) {
    ll ans = 1;
    while (p) {
        if (p & 1) {
            ans = (ans * x) % mod;
            p--;
        }
        x = (x * x) % mod;
        p >>= 1;
    }
    return ans;
}
 
ll nCr(ll n, ll r) {
    if (r > n) {
        return 0;
    }
    return mul(fact[n], mul(power(fact[n - r], mod - 2), power(fact[r], mod - 2)));
}
 
void Solve() {
    ll n, x, pos;
    cin >> n >> x >> pos;
    ll left = 0, right = n, mid, less = 0, more = 0;
    while (left < right) {
        mid = (left + right) / 2;
        if (mid <= pos) {
            less += (mid != pos);
            left = mid + 1;
        } else {
            more++;
            right = mid;
        }
    }
    fact[0] = 1;
    for (int i = 1; i <= n; i++) {
        fact[i] = mul(fact[i - 1], i);
    }
    ll lessWays = nCr(x - 1, less);
    ll moreWays = nCr(n - x, more);
    ll ans = fact[n - less - more - 1];
    ans = mul(ans, mul(lessWays, fact[less]));
    ans = mul(ans, mul(moreWays, fact[more]));
    cout << ans;
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int testcases = 1;
    // cin >> testcases;
 
    while (testcases--) {
        Solve();
    }
}