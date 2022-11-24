#include<bits/stdc++.h>
using namespace std;
#define int long long
//vector<int> adj[200005];
//vector<int> vis(200005,0);
//vector<int> deg(200005,0);
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 
 
 
 int32_t main(){
 
 
    int t;
    cin>>t;
    while(t--){
 
      // int n;
       //c//in>>n;
 
       //int a[n];
       /* int a[n];
        for(int i =0; i<n; i++){
 
          cin>>a[i];
        }
 
 
       if(a[0]+a[1]>a[n-1]){
 
       cout<<-1<<endl;
       }
     
      else  cout<<1<<" "<<2<<" "<<n<<endl;
     */
 
       string s;
       cin>>s;
 
       vector<int> v;
       int count =0;
       for(int i =0; i<s.length(); i++){
 
           if(s[i]-'0'==1){
 
               count++;
               //cout<<count<<endl;
 
               if(i==s.length()-1 && count>=1){
                v.push_back(count);
           }
           }
 
           
          
           else {
 
            if(count>=1){
            v.push_back(count);
            }
            count =0;
           
           }
 
       }
 
       sort(v.begin(),v.end());
       reverse(v.begin(),v.end());
 
       int sum =0;
       for(int i =0; i<v.size(); i+=2){
 
          sum+=v[i];
       }
 
       cout<<sum<<endl;
 
 
  
 
 
 
    }
  
    }
  
 
 
 
 
 
 
 
 
 
 
 
 
 