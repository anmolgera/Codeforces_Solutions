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
 
const int N = 1e6 + 5 ;
int a[N] , dp[N] , freq[N];
 
 
// Matrix Ai has dimension p[i-1] x p[i] 
 
 
 
 
// for i = 1..n 
 
    /*int longestPalindromeSubseq(string s) {
        
        int n= s.length();
        
        string s2 = s;
        
         reverse(s.begin(),s.end());
        
        int dp[n+1][n+1];
        
        
        for(int i =0; i<=n; i++){
            
            
            
            for(int j =0; j<=n; j++){
                
                if(i== 0 || j==0){
                    
                    dp[i][j]=0;
                }
                
                else if(s[i-1]==s2[j-1]){
                    
                    dp[i][j] = dp[i-1][j-1]+1;
                    
                    
                }
                
                else dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
                
                
                
                
                
            }
        }
        
        
        
        
    return dp[n][n];    
        
        
    }*/
 
// CPP code to print all permutations 
 
// Function to generate permutations 
vector<string> v;
 
void permute(string input) 
{ 
  int n = input.length(); 
 
  // Number of permutations is 2^n 
  int max = 1 << n; 
 
  // Converting string to lower case 
    transform(input.begin(), input.end(), input.begin(), 
                        ::tolower); 
  // Using all subsequences and permuting them 
  for (int i = 0; i < max; i++) { 
    
    // If j-th bit is set, we convert it to upper case 
    string combination = input; 
    for (int j = 0; j < n; j++) 
      if (((i >> j) & 1) == 1) 
        combination[j] = '?';   
 
    // Printing current combination 
  v.push_back(combination);
  } 
} 
 
 
 
 
 
int32_t main(){
anmol();
  
     
    int t;
    cin>>t;
 
    while(t--){
 
      int n;
      cin>>n;
      vector<int> v(n,0);
 
 
      for(int i =0; i<n; i++){
 
 
        cin>>v[i];
      }
 
 
      sort(v.begin(),v.end());
      reverse(v.begin(),v.end());
 
 
      int sum =0;
      //int sum1=0;
 
      for(int i =0; i<n; i++){
 
        sum+=v[i];
      }
      
     /* for(int i =1; i<n; i+=2){
 
        sum1+=v[i];
      }*/
 
 
      int mx = 0;
      for(int i=0; i<n; i++){
 
        mx = max(mx,v[i]);
      }
 
      if(mx>sum-mx){
        cout<<"T"<<endl;
        //cout<<"HL"<<endl;
        //continue;
      }
 
      else { 
 
            //cout<<"T"<<endl;
           
             if(sum%2){
              cout<<"T"<<endl;
             }
 
             else cout<<"HL"<<endl;
 
           }
    }
 
 }
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  
 
 
 
 
 
 
 
 
 
   
 
 
 
 
 
 
  
  
 