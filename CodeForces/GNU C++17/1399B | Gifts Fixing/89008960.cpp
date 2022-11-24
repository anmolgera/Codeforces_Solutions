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
 
const int N = 1e6 + 5;
int a[N],b[N],c[N],d[N],e[N];
 
 
int32_t main(){
  anmol();
 int t;
 cin>>t;
 
 while(t--){
 
 int n;
 cin>>n;
 
 int min1 = INT_MAX;
  for(int i =0; i<n; i++){
 
    cin>>a[i];
 
    if(a[i]<min1){
 
      min1 = a[i];
    }
 
 
  }
 
   int min2 = INT_MAX;
   for(int i =0; i<n; i++){
 
    cin>>b[i];
 
    if(b[i]<min2){
 
      min2 = b[i];
    }
   }
 
  //int min = a[0];
  //int min2 = b[0];
  
 /* for(int i =0; i<n; i++){
 
    c[i] = a[i];
  }
 
 
  for(int i =0; i<n; i++){
 
    d[i] = b[i];
  }
  sort(c,c+n);
 
  sort(d,d+n);
 
    int min1 = c[0];
  int min2 = d[0];
*/
  int count1=0;
  int count2 =0;
 
 // cout<<min1<<" "<<min2<<endl;
  for(int i =0; i<n; i++){
  
    
      count1+=(min(a[i]-min1,b[i]-min2));
      int x =  min(a[i]-min1,b[i]-min2);
      a[i] -= x;
      b[i] -= x;
 
      //e[i] = min(a[i],b[i]);
 
    
 
 
    }
  
   /* for(int i =0; i<n; i++){
 
      cout<<a[i]<<" ";
    }
 
    cout<<endl;
 
    for(int i =0; i<n; i++){
 
      cout<<b[i]<<" ";
    }
    
    cout<<endl;
    */
     
 
    for(int i =0; i<n; i++){
 
          count1 += (a[i]-min1);
 
    }
 
 
    for(int i =0; i<n; i++){
 
      count1+= (b[i] - min2);
    }
 
 
 
 /* for(int i =1; i<n; i++){
 
    count2 += b[i]-b[0];
  }
  */
 
  cout<<count1<<endl;
  bool flag = true;
 
 
  
}
}