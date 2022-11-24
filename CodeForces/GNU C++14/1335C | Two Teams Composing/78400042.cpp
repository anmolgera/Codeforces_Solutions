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
#define vi              vector<int>
#define mii             map<int,int>
#define my              unordered_map<int,int>
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
 
 
bool sign(int num){
 return num>0;
}
 
int32_t main()
{
   anmol();
   int t;
    cin>>t;
 
    while(t--){
 
        long long n;
        cin>>n;
 
        long long* arr=new long long[n];
 
        for(long long i=0;i<n;i++){
 
            cin>>arr[i];
 
        }
 
        unordered_map<long long,long long> mp;
 
        for(long long i=0;i<n;i++){
 
            if(mp.count(arr[i])==0){
                mp[arr[i]]=1;
            }
            else{
                mp[arr[i]]+=1;
            }
        }
 
        unordered_map<long long,long long> :: iterator it=mp.begin();
        long long max_freq=0;
        long long count=mp.size();
        while(it!=mp.end()){
 
            if((it->second)>max_freq){
                max_freq=it->second;
            }
 
 
            it++;
        }
 
        // max_freq has the max freq in account;
 
        long long x=max_freq-1;
 
        if(x>=count){
            cout<<count<<endl;
        }
 
        else if((count-x)==1){
            cout<<x<<endl;
        }
        else{
            cout<<x+1<<endl;
        }
 
 
        delete []arr;
 
    }
 
    return 0;
 
  
}