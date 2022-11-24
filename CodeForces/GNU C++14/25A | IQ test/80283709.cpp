 
 
#include<bits/stdc++.h>
using namespace std;
#define double long double
#define int long long
#define f(z) for(int i=1;i<=z;i++)
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define vi vector<int>
#define pb push_back
#define si set<int>
int cl(int n ,int m) { if(n%m)return n/m + 1 ;else return n/m ;}
int pw(int a,int b,int M){a%=M;int r=1;while(b>0){if(b&1)r=r*a%M;a=a*a%M;b>>=1;}return r;}
#define mod  1000000007
#define T() int TT; cin>>TT; while(TT--)
#define P pair<int,int>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pr(r) cout <<"Case #"<<r <<": " ;
 
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 
 
 
const int N = 1e6 + 5 ;
int arr[N] , dp[N] , b[N] ;
 
 
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
void selectionSort(int arr[], int n)  
{  
    int i, j, min_idx;  
  
    // One by one move boundary of unsorted subarray  
    for (i = 1; i <=n-1; i++)  
    {  
        // Find the minimum element in unsorted array  
        min_idx = i;  
        for (j = i+1; j <=n; j++)  
        if (arr[j] < arr[min_idx])  
            min_idx = j;  
  
        // Swap the found minimum element with the first element  
        swap(&arr[min_idx], &arr[i]);  
    }  
}  
 
signed main(){
  anmol();
  
  int n;
  cin>>n;
 
 
  //int *arr = new int[n];
 
  for(int i =1; i<=n; i++){
    cin>>arr[i];
    arr[i] = arr[i]%2;
  }
 
 
 
  int idx =0;
  for(int i =1; i<n; i++){
    if(arr[i]!=arr[i+1]){
     idx = i;
     break;
    }
  }
 
 
  if(arr[1]!=arr[n] && arr[1]!=arr[2]){
 
  cout<<1<<endl;
 
  }
  
  else cout<<idx+1<<endl;
   
 
 
  }
 
 
    
  
 
 
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
 
 
 
 
 
/*int32_t main()
{
   anmol();
jkj
w(t){
  int n;
  int m;
  cin>>n;
  cin>>m;
 
  int countb =0;
  int countw =0;
 
  
 
for(int i =0; i<n; i++){
 
  for(int j =0; j<m; j++){
 
   if((i==n-1)&&(j==m-1)){
    cout<<"W";
   }
 
   else cout<<"B";
 
 
  }
 
  cout<<endl;
}
 
}
 
}
*/
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  