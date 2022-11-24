#include <bits/stdc++.h>
#define int long long 
 
using namespace std;
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 
const int N = 1e6 + 5 ;
int a[N] , dp[N] , b[N], A[1000][1000]; 
 
 
int getlen(string s, int left, int right){
 
int l = left;
int r = right;
 
while(l>=0 && r<s.length()&& s[l]==s[r]){
 
 l--;
 r++;
 
 
}
 
return r - l -1;
 
 
 
 
 
 
 
}
 
 
bool arraySortedOrNot(int a[], int n) 
{ 
    // Array has one or no element 
    if (n == 0 || n == 1) 
        return true; 
  
    for (int i = 1; i < n; i++) 
  
        // Unsorted pair found 
        if (a[i - 1] > a[i]) 
            return false; 
  
    // No unsorted pair found 
    return true; 
} 
 
int32_t main(){
int t;
cin>>t;
while(t--){
   
    int n,m;
    cin>>n;
    for(int i =0; i<n; i++){
       
cin>>a[i];
    }
  
 for(int i =0; i<n; i++){
  cin>>b[i];
 }
  int count =0;
 for(int i =0; i<n; i++){
 if(b[i]==1){
  count++;
 }
 
 }
 
 if(count>=1 && (n-count)>=1){
  cout<<"Yes"<<endl;
 }
 
 else {
 
    if(arraySortedOrNot(a,n)){
     cout<<"Yes"<<endl;
    }
 
    else cout<<"No"<<endl;
 
 
 
 
 }
 
 
 
 
 
 
}
 
}
 
 