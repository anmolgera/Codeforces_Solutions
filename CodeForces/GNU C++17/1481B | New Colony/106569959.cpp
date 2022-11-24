#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main(){
 
    int t;
    cin>>t;
    while(t--){
 
 
         int x,y;
         cin>>x>>y;
 
          int a[x];
          for(int i =0; i<x; i++){
             cin>>a[i];
          }
 
          bool flag = false;
          int pos =-1;
          for(int i =0; i<y; i++){
            int j;
            for(j =0; j<x-1; j++){
                   
                   if(a[j]<a[j+1]){
                    a[j]+=1;
                    break;
                   }
 
            }
 
            if(j==x-1){
                flag = true;
                break;
            }
            
            else {
                pos=j+1;
            }
 
          }
          if(flag){
            cout<<-1<<endl;
          }
 
          else cout<<pos<<endl;
 
 
         }}