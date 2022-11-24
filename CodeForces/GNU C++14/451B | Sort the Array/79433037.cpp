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
 
 
bool arraySortedOrNot(int arr[], int n) 
{ 
    // Array has one or no element 
    if (n == 0 || n == 1) 
        return true; 
  
    for (int i = 1; i < n; i++) 
  
        // Unsorted pair found 
        if (arr[i - 1] > arr[i]) 
            return false; 
  
    // No unsorted pair found 
    return true; 
} 
 
bool sign(int num){
 return num>0;
}
 
int32_t main()
{
   anmol();
  
  int n;
  cin>>n;
 
  int*arr = new int[n];
 
  for(int i =0; i<n; i++){
 
 
    cin>>arr[i];  
  }
   
 
 int prev =-1;
 int next =-1;
 bool vis = false;
 int count =0;
 bool nex = false;
  for(int i =0; i<n-1; i++){
  
  if(arr[i]>arr[i+1] && vis ==false){
 
   prev = i;
   vis = true;
   count++;
 
  }
    
 
   if(vis == true && arr[i]<arr[i+1] ){
    next = i;
 
    nex = true;
    break;
   }
 
   if(nex == false && vis == true){
    next = n-1;
   }
  else continue;
 
 
  }
  int start = prev;
  int end = next;
  while (start < end) 
    { 
        swap(arr[start++],arr[end--]);
    } 
 
/*int flag =0;
for(int i =0; i<n-1; i++){
 
 if(arr[i]<arr[i+1]){
 
  continue;
 }
 
 else flag =1;
}
*/
 
/*for(int i =0; i<n; i++){
 cout<<arr[i]<<" ";
}*/
if(arraySortedOrNot(arr,n)){
 cout<<"yes"<<endl;
 
 if(prev ==-1 && next ==-1){
  cout<<1<<" "<<1<<endl;
 }
 
 else cout<<prev+1<<" "<<next+1;
}
 
else cout<<"no"<<endl;
 
  }
   
 
 
 
 
 
 
    
 
  