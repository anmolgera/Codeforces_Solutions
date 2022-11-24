#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <stdio.h>
#define li long long int
 
 
 
int main() {
      int t;
      cin>>t;
      while(t){
          t--;
           int n;
          
          cin>>n;
          int k;
          cin>>k;
          int a[n];
          for(int i=0;i<n;i++)
          cin>>a[i];
          map<int,int>m;
          vector<int>v1;
          vector<int>v2;
          int start =0;
          int end =n-1;
          while(start<=end){
              int x = a[start]+a[end];
              m[x]++;
              v1.push_back(min(a[start],a[end]));
              v2.push_back(max(a[start],a[end]));
              int q = v2.size()-1;
              v2[q]=  -v2[q];
              start++;
              end--;
              
          }
          sort(v1.begin(),v1.end());
           sort(v2.begin(),v2.end());
          int ans = n/2;
          map<int,int>::iterator i;
          vector<int>::iterator q ;
          for(i=m.begin();i!=m.end();i++){
          
              int x = i->first;
              int t = ((n/2)- i->second);
               q = lower_bound(v1.begin(),v1.end(),x);
               int z = v1.end() - q;
              
              if(z!=0){
                  t+=z;
              }
              if(x-k-1>0){
              q = lower_bound(v2.begin(),v2.end(),-(x-k-1));
                int z = v2.end() - q;
              
              if(z!=0){
                  t+=z;
              }
          
              }
              ans = min(ans,t);
              
          }
      
        
          cout << ans << endl;
          
        
      }
          }
          
          
     
 
 