#include<bits/stdc++.h>
#define god dimasi5eks
#pragma GCC optimize("O3")
#define fi first
#define se second
#define pb push_back
#define pf push_front
#define mod 1000000007
 
using namespace std;
 
typedef long long ll;
 
int n, l, x, y, v[200002];
 
bool canx, cany;
 
map<int, int> mp;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> l >> x >> y;
    for(int i = 1; i <= n; ++i)
        cin >> v[i];
 
    for(int i = 1; i <= n; ++i)
    {
        if(mp.find(v[i] - x) != mp.end())
            canx = 1;
        if(mp.find(v[i] - y) != mp.end())
            cany = 1;
        mp[v[i]] = 1;
    }
    if(canx && cany)
    {
        cout << 0;
        return 0;
    }
    if(cany)
    {
        cout << 1 << '\n';
        cout << x << '\n';
        return 0;
    }
    if(canx)
    {
        cout << 1 << '\n';
        cout << y << '\n';
        return 0;
    }
    mp.clear();
    for(int i = 1; i <= n; ++i)
    {
        if(mp.find(v[i] - x - y) != mp.end())
        {
            cout << 1 << '\n';
            cout << v[i] - x << '\n';
            return 0;
        }
        mp[v[i]] = 1;
    }
    mp.clear();
    for(int i = 1; i <= n; ++i)
    {
        if(mp.find(v[i] + x - y) != mp.end() && v[i] + x <= l)
        {
            cout << 1 << '\n';
            cout << v[i] + x << '\n';
            return 0;
        }
        mp[v[i]] = 1;
    }
    mp.clear();
 
    for(int i = 1; i <= n; ++i)
    {
        if(mp.find(v[i] + y - x) != mp.end() && v[i] + y <= l)
        {
            cout << 1 << '\n';
            cout << v[i] + y << '\n';
            return 0;
        }
        mp[v[i]] = 1;
    }
    mp.clear();
 
    for(int i = 1; i <= n; ++i)
    {
        if(mp.find(v[i] - x + y) != mp.end() && v[i] - x >= 0)
        {
            cout << 1 << '\n';
            cout << v[i] - x << '\n';
            return 0;
        }
        mp[v[i]] = 1;
    }
 
    mp.clear();
    for(int i = 1; i <= n; ++i)
    {
        if(mp.find(v[i] - y +x) != mp.end() && v[i] - y >= 0)
        {
            cout << 1 << '\n';
            cout << v[i] - y << '\n';
            return 0;
        }
        mp[v[i]] = 1;
    }
    cout << 2 << '\n';
    cout << x << " " << y << '\n';
    return 0;
}