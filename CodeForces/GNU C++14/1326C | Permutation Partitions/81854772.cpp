#include <bits/stdc++.h>
 
using namespace std;
 
const int MOD = 998244353;
 
int n, k, a;
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    int p = -1;
    int ans = 1;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a >= n - k + 1)
        {
            if (p != -1)
                ans = 1LL * ans * (i - p) % MOD;
            sum += a;
            p = i;
        }
    }
    cout << sum << " " << ans << "\n";
    return 0;
}