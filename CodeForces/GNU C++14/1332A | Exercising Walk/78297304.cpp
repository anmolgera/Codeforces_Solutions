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
 
    w(t){
 
    
int a,b,c,d,x,y,x1,y1,x2,y2;
cin>>a>>b>>c>>d>>x>>y>>x1>>y1>>x2>>y2;
 
int ans =1;
 
if(a-b>x-x1 || b-a >x2-x){
 ans =0;
}
 
if(c-d >y-y1 || d-c >y2-y){
 ans =0;
}
 
if(x1 == x2 && a+b >0){
 ans =0;
}
 
if(y1 ==y2 && c+d >0){
 ans =0;
}
 
 
if(ans==1){
 
 cout<<"Yes"<<endl;
}
 
else cout<<"No"<<endl;
}
 
 
 
}