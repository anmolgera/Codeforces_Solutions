#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main(){
 
    int t;
    cin>>t;
    while(t--){
 
 
        int n;
        cin>>n;
        int a[n],b[n],c[n];
        for(int i =0; i<n; i++){
            cin>>c[i];
        }
        
        for(int i =0; i<n; i++){
            cin>>a[i];
        }
        for(int i =0; i<n; i++){
            cin>>b[i];
            b[i] = abs(a[i]-b[i]);
        }
        int temp =0;
        int ans =0;
        for(int i =1; i<n; i++){
           if(b[i]==0){
            temp =0;
           }
 
           else {
 
               temp = max(b[i],temp-b[i]);
           }
 
           temp +=2;
           temp +=c[i]-1;
           ans = max(temp,ans);
        }
       
       cout<<ans<<endl;
     
    }
}