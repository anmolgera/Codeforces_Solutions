#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int tcs;
    cin >> tcs;
 
    while (tcs--) {
        int n, x, y;
        cin >> n >> x >> y;
        int diff = y - x;
        for (int delta = 1; delta <= diff; ++delta) {
            if (diff % delta) continue;
            if (diff / delta + 1 > n) continue;
            int k = min((y - 1) / delta, n - 1);
            int a0 = y - k * delta;
            for (int i = 0; i < n; ++i) {
                cout << (a0 + i * delta) << ' ';
            }
            cout << endl;
            break;
        }
    }
}