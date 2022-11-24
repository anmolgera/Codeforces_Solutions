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
 
const int N = 1e6 + 5 ;
int a[N] , dp[N] , b[N];
 
void printFrequency(string str,int t) 
{ 
 
     int m = t/10;
     int n = t%10; 
    // Define an unordered_map 
    unordered_map<char, int> M; 
  
    // Traverse string str check if 
    // current character is present 
    // or not 
    for (int i = 0; str[i]; i++) { 
  
        // If the current characters 
        // is not found then insert 
        // current characters with 
        // frequency 1 
        if (M.find(str[i]) == M.end()) { 
            M.insert(make_pair(str[i], 1)); 
        } 
  
        // Else update the frequency 
        else { 
            M[str[i]]++; 
        } 
 
    } 
  
    // Traverse the map to print the 
    // frequency 
    for (auto& it : M) { 
        cout << it.first << ' '
             << it.second << '\n'; 
    } 
} 
  
bool isPowerOfTwo(int n) 
{ 
   if(n==0) 
   return false; 
  
   return (ceil(log2(n)) == floor(log2(n))); 
}
 
 
int32_t main()
{
   anmol();
   int t;
   cin>>t;
 
   while(t--){
 
 
    int n;
    cin>>n;
   
   if(n<=3){
    cout<<1<<endl;
   }
 
   else 
   cout<<(n)/2<<endl;
 
 
   }
 
 
 
}
 
   
 
   
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  