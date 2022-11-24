#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
#define int long long 
 
int32_t main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
 
    int t;
    cin>>t;
    while(t--){
     
      int a,b,x,y,n;
      cin>>a>>b>>x>>y>>n;
 
 
    /*   if(a>=x && abs(a-x)<=n){
 
        a =- abs(a-x);
        n =- abs(a-x);
         
         if(abs(b-x)<=n){
         b =- abs(b-x);
         n =- abs(b-x);
 
          }
 
          else {
 
            b=-n;
          }
 
 
       }
    
 
       else if(a>=x && abs(a-x)<=n){
 
        a =- abs(a-x);
        n =- abs(a-x);
         
         if(abs(b-x)<=n){
         b =- abs(b-x);
         n =- abs(b-x);
 
          }
 
          else {
 
            b=-n;
          }
 
  
       }
 
       */
 
 
      int j =a;
      int i =b;
 
 
      int min1;
      int min2;
      int n1 =n;
 
       
        if(j>=x){
        j -=min(abs(a-x),n1);
        n1-=min(abs(a-x),n1);
        //cout<<j<<"hi"<<endl;
        }
 
        if(i>=y){
        i -= min(abs(b-y),n1);
        //cout<<i<<"hi"<<endl;
        } 
        min1 = i*j;
       // cout<<min1<<endl;
 
         j =b;
         i =a;
 
        if(j>=y){
        j -=min(abs(j-y),n);
        n -=min(abs(b-y),n);
        }
 
        if(i>=x){
        i -= min(abs(a-x),n);
        }
        min2 = i*j;
        //cout<<min2<<endl;
 
 
 
      cout<<min(min1,min2)<<endl;
 
 
 
 
    }
 
 
 
    }
    
    