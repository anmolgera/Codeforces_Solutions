#include <iostream>
#include <set>
#include <map>
#include<bits/stdc++.h>
 
using namespace std;
 
 
#define int long long 
int32_t main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
 
    while(t--){
 
        int n;
        cin>>n;
 
        int k;
        cin>>k;
 
        int a[n];
  
        for(int i =0; i<n; i++){
 
            cin>>a[i];
        }
 
        sort(a,a+n);
        int s = a[n-1];
 
        for(int i = n-2; i>=0; i--){
 
             if(k==0){
                break;
             }
 
             s+=a[i];
             a[i] =0;
             k--;
 
 
        }
 
       cout<<s<<endl;
 
 
       }
 
      
 
 
    }
 
 
 
    
 
 
 
 