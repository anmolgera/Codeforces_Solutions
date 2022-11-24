#include<bits/stdc++.h>
#define ll                 long long int
#define mod                1000000007
#define pi                 3.14159265358979323846264338327950288419716939937510
#define setbit(x)          __builtin_popcountll(x)
#define db                 long double
#define pp(x)              pair<x,x>
#define ff                 first
#define ss                 second
#define FIO                ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tc                 ll tc; cin>>tc; for(ll number = 1 ; number <= tc ; number ++ )
#define vv(x)              vector<x>
#define pb                 push_back
#define pob                pop_back
#define pf                 push_front
#define pof                pop_front
#define endl               "\n"
#define pq                 priority_queue
#define dbg(x)             { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y)          { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define bp                 ll kkk; cin >>kkk;
#define dbgArr(a,n)        cout<<"Array "<<#a<<endl; for(ll i=0 ; i<n ; i++) cout<<a[i]<<" "; cout<<endl;
#define maxE(a,n)          *max_element(a,a+n);
#define minE(a,n)          *min_element(a,a+n);
#define forn(i,s,n)        for(ll i=s ; i<n ; i++)
#define fornr(i,e,s)       for(ll i=e-1 ; i>=s ; i--)
#define arr(a,n)           for(ll i=0;i<n;i++){ cin>>a[i]; }
#define arr1(a,n)          for(ll i=1;i<=n;i++){ cin>>a[i]; }
#define file freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
#define print cout<<"Case #"<<number<<": "
#define all(x) x.begin(), x.end()
ll power(ll x, ll b,ll m) {ll p = 1;while (b > 0) {if(b&1) {p = p * x; p %= m;} b >>= 1; x *= x; x %= m;} return p % m;}
using namespace std;
# define INF 1e15
struct lex_compare {
    bool operator() (pp(ll) p1, pp(ll) p2){
        return p1.ff >= p2.ff;
    }
};
 
 
int main(){
    FIO;
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        string a,b; cin >> a >> b;
        vv(ll) ans;
        for(ll i = n-1;i>=0;i--){
            if(a[i] == b[i]){
                continue;
            }else{
                ans.pb(i);
                ans.pb(0);
                ans.pb(i);
            }
        }
        cout << ans.size() << " ";
        for(auto i : ans){
            cout << i+1 << " ";
        }
        cout << endl;
    }
    return 0;
}