#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void anmol()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
int32_t main(){
anmol();
int t;
t=1;
 
//cin>>t;
//int z =0;
while(t--){
 
  int n;
  cin>>n;
 
  int a[n];
  for(int i =0; i<n; i++){
      cin>>a[i];
  }
  
  int ans=0;
 
  int cc=0;
 
    // min pq--> represents the negative number which were taken
 
    priority_queue<int,vector<int>,greater<int> > pq;
 
   
 
    for(int i=0;i<n;i++){
 
        // current health--> cc
        // what i wish to add --> v[i]
 
        if(cc+a[i]<0){
 
            if(pq.size()==0){
 
                // no option but to ignore the current potion
                continue;
 
            }
 
            else{
 
                int val=pq.top();
                if(val<a[i]){
 
                    pq.pop();
                    cc-=(val);
                    pq.push(a[i]);
                    cc+=a[i];
 
                }
 
            }
 
        }
 
        else{
 
            // still u need to see whether the number you have chosen is negative
 
            if(a[i]<0){
 
                pq.push(a[i]);
                cc+=(a[i]);
                ans++;
 
            }
 
            else{
 
                cc+=a[i];
                ans++;
 
            }
 
        }
 
    }
 
    cout<<ans<<endl;
   
 
 
}
 
}