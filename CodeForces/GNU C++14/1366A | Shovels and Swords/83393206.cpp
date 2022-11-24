 
 
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
int a[N] , dp[N] , b[N] ;
 
 
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
 
 
int mini(int n){
  int min1 = INT_MAX;
  int sum =0;
  while(n!=0){
   sum = n%10;
 
   min1 = min (min1 ,sum);
  
 
 n = n/10;
  }
 
 
 return min1;
}
 
int maxi(int n){
  int max1 =0;
  int sum =0;
  while(n!=0){
   sum = n%10;
  
   max1= max(max1 ,sum);
  
 
 n = n/10;
  }
 
 
 return max1;
}
 
 
signed main(){
  anmol();
int t;
cin>>t;
while(t--){
 
int n,m;
cin>>n>>m;
 
if(2*min(n,m)<=max(n,m)){
cout<<min((max(n,m)/2),min(n,m))<<endl;}
 
else cout<<(n+m)/3<<endl;
}
 
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
    
 
  