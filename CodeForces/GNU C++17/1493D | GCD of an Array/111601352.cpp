#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<vector<vector<int>>> vvvi;
typedef vector<long long> vl;
typedef vector<vector<long long>> vvl;
typedef vector<vector<vector<long long>>> vvvl;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef long long ll;
const long long MOD=1000000007;
#define rep(i,n) for(ll i=0;i<(n);i++)
#define ALL(v) v.begin(), v.end()
#define sz(v) (int)(v.size())
#define eb emplace_back
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
 
 
 
 
 
ll gcd(ll x, ll y){
    ll big=max(x,y);
    ll small=min(x,y);
 
    if (big%small==0) return small;
    
    return gcd(small, big%small);
}
 
 
ll modpow(ll x, ll p){
    ll res=1;
    while (p>0){
        if (p & 1){
            res*=x;
            res%=MOD;
        }
        x=x*x%MOD;
        p>>=1;
    }
    return res;
}
 
 
 
 
 
int main(){
 
    ll n,q;
    cin>>n>>q;
    vl a(n);
    rep(i,n) cin>>a[i];
 
 
    vl primes(200001,1);
    primes[0]=0;
    primes[1]=0;
 
    for (ll i=2; i<200001; i++){
        if (primes[i]==1){
            for (ll j=2*i; j<200001; j+=i){
                primes[j]=i;
            }
        } 
    }
 
    vector<multiset<ll>> data(200001);
 
    vector<map<ll,ll>> div(n);
 
    rep(i,n){
         if (a[i]==1) continue;
 
        map<ll,ll> cnt;
 
        ll x=a[i];
 
        while (primes[x]!=1){
            cnt[primes[x]]++;
            x/=primes[x];
        }
 
        cnt[x]++;
 
        div[i]=cnt;
 
    }
 
    rep(i,n){
        for (auto &cnt:div[i]){
            data[cnt.first].insert(cnt.second);
        }
    }
 
 
 
 
 
 
    ll firstgcd=a[0];
 
    for (ll i=1; i<n; i++){
        firstgcd=gcd(firstgcd,a[i]);
    }
 
    while (q--){
        ll i;
        ll x;
        cin>>i>>x;
        i--;
 
        if (x==1){
            cout<<firstgcd<<endl;
            continue;
        }
 
        map<ll,ll> cntx;
 
 
        while (primes[x]!=1){
            cntx[primes[x]]++;
            x/=primes[x];
        }
 
        cntx[x]++;
 
 
 
 
        ll change=1;
 
        for (auto &afp: cntx){
            ll q=afp.first;
            ll before=div[i][q];
            ll after=before+afp.second;
            
            ll bemin,afmin;
 
            if (sz(data[q])<n) bemin=0;
            else bemin=*data[q].begin();
 
            if (before!=0) data[q].erase(data[q].find(before));
            data[q].insert(after);
 
            if (sz(data[q])<n) afmin=0;
            else afmin= *data[q].begin();
 
            change*=modpow(q, afmin-bemin);
            change%=MOD;
 
 
        }
 
        firstgcd*=change;
        firstgcd%=MOD;
 
        cout<<firstgcd<<endl;
 
 
        for (auto &tmp :cntx){
            div[i][tmp.first]+=tmp.second;
        }
 
 
 
 
    }
 
 
 
}