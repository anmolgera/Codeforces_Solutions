#include<bits/stdc++.h>
using namespace std;
#define int long long
 
 
int32_t main() {
/*#ifdef iq
  freopen("a.in", "r", stdin);
#endif
  ios::sync_with_stdio(0);
  cin.tie(0);
 */
    int n;
    cin >> n;
     
 
      int mx = -1;  
      int a[n];
     int s =0;
     for(int i =0; i<n; i++){
 
      cin>>a[i];
      mx = max(mx,a[i]);
      s +=a[i];
     }
   
 
  if(mx > s-mx){
 
    cout<<"NO"<<endl;
  }
      else {
 
 
 
 
        if(s%2){
 
          cout<<"NO"<<endl;
        }
 
        else cout<<"YES"<<endl;
      }
 
  }
 