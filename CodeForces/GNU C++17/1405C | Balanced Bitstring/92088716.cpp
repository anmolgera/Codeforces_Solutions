 #include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
 
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
//#define vi              vector<int>
#define mii             map<int,int>
//#define my              unordered_map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define ml(brr,n,type)  type *brr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
 
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 
 
int32_t main(){
  anmol();
 int t;
 cin>>t;
 
 while(t--){
 
 int n,k;
 cin>>n>>k;
 
 string s;
 cin>>s;
 map<int,int> mp;
 bool ch = true;
 for(int i =0; i<n; i++){
    
    if(s[i]!='?'){
 
 
    int j = i%k;
 
    if(mp.find(j)==mp.end()){
 
        mp[j] = (s[i]-'0');
    }
 
 
    else {
 
        if(mp[j]!=(s[i]-'0')){
 
            ch = false;
           break;
        }
    }
  
  }
 
}
 int zero =0;
 int one = 0;
for(int i =0; i<k; i++){
 
if(mp.find(i)!=mp.end()){
if(mp[i]==0){
    zero++;
}
 
else if(mp[i]==1){one++;}
else continue;
 
}
}
if(one>k/2 || zero >k/2){
 
    ch = false;
}
 
 
if(ch){
    cout<<"YES"<<endl;
}
 
else cout<<"NO"<<endl;
 
 
 
 
 
 
 
}}