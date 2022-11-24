#include<bits/stdc++.h>
using namespace std;
#define int long long
 
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
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
 
 
bool check(int n){
   bool flag = false;
    int m = n;
 while(m!=1){
 
    
    if(m%2){
        flag = true;
        break;
    }
    m =  m/2;
 
 
 }
 
 
 return !flag;
 
 
 
}
 
 
 
int32_t main(){
anmol();
 
 
 
 
 
  int n,m;
 
  cin>>n>>m;
 
  
   
  for(int i =0; i<n; i++){
    
    string s;
    cin>>s;
 
    for(int j =0; j<m; j++){
 
            if(s[j]=='.'){
 
              if((i+j)%2==0){
                s[j]='B';
              }
              else s[j] ='W';
 
            }
 
            else {
              continue;
            }
 
 
    }
 
    cout<<s<<endl;
  }
 
}
 