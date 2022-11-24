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
int A[N] , dp[N] , brr[N], a[1000][1000]; 
 
 
int getlen(string s, int left, int right){
 
int l = left;
int r = right;
 
while(l>=0 && r<s.length()&& s[l]==s[r]){
 
 l--;
 r++;
 
 
}
 
return r - l -1;
 
 
 
 
 
 
 
}
 
int32_t main(){
int t;
cin>>t;
while(t--){
   
    int n,m;
    cin>>n>>m;
    for(int i =0; i<n; i++){
       
       for(int j =0; j<m; j++){
 
 
          cin>>a[i][j];
 
       }
 
 
    }
  
 /*  for(int i =0; i<n; i++){
       
       for(int j =0; j<m; j++){
 
 
          cout<<a[i][j]<<" ";
 
       }
cout<<endl;
 
    }
 
*/
 
 
int count  =0;
int sum1 =0;
for(int i =0; i<n; i++){
       
       for(int j =0; j<m; j++){
 
 
          if(a[i][j]==0){
         count++;
 
          }
         // else count=0;
 
       }
       //cout<<count<<endl;
       if(count==m){
        sum1+=1;
       }        
    count =0;
 
    }
 
 
 
 
 int sum2 =0;
 count =0;
 for(int i =0; i<m; i++){
       
       for(int j =0; j<n; j++){
 
 
          if(a[j][i]==0){
         count++;
 
          }
 
          //else count =0;
 
       }
       //cout<<count<<endl;
       if(count==n){
        sum2+=1;
       }        
    count =0;
 
    }
 
//cout<<sum1<<sum2<<" "<<endl;
int max1 = max(sum1,sum2);
int min1 = min(sum1,sum2);
 
//cout<<max1<<min1<<endl;
 
if(min1%2){
 cout<<"Ashish"<<endl;
}
 
 else cout<<"Vivek"<<endl;
 
 
}
 
}
 
 