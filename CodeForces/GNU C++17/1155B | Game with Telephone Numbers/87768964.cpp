#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
const int N = 1e6 + 5 ;
int  freq[N];
bool dp[2005][2005];
 
 
int32_t main()
{
    anmol();
    int n;
    cin>>n;
 
    string s;
    cin>>s;
 
    int cnt = (n-10);
    int cnt2 = cnt;
   
    int x = n-cnt;
    
    int count =0;
    for(int i =0; i<cnt; i++){
 
      if(s[i]=='8'){
 
        count++;
      }
 
    }
 
    if(count > (n-11)/2){
 
        cout<<"YES"<<endl;
    }
 
    else cout<<"NO"<<endl;
 
 
 
}