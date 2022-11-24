#include <iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;
 
/*int n1,n2,k1,k2;
int cache[102][102][12][12];
#define MOD 100000000
*/
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
//#define vi              vector<int>
#define mii             map<int,int>
#define my              unordered_map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
//#define mk(arr,n,type)  type *arr=new type[n];
//#define ml(brr,n,type)  type *brr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
//mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
int32_t main()
{
    int t;
    cin>>t;
 
    while(t--){
 
        int x;
        cin>>x;
 
      
 
        if(x==1){
            cout<<1<<endl;
        }
 
        else{
 
            int val=x-1;
 
            int counts=0;
 
            int i=3;
            int diff=2;
 
 
            while(val>=0){
 
                val-=(((i)*(i+1))/2);
                //ii+=4;
                diff*=2;
                i+=diff;
                counts++;
 
            }
 
            cout<<counts<<endl;
 
        }
 
 
    }
 
    return 0;
}