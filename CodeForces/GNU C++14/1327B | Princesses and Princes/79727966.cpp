#include <bits/stdc++.h>
using namespace std;
 
 
 
 
 
 
int main(){
 
   int t;
   cin>>t;
   while(t){
       t--;
    int n;
    cin>>n;
   set<int>s;
     
     vector<vector<int>>v;
     for(int i=0;i<n;i++){
         vector<int>temp;
         v.push_back(temp);
     }
     for(int i=0;i<n;i++){
         int k;
         cin>>k;
       
         for(int j=0;j<k;j++){
             int x;
             cin>>x;
             v[i].push_back(x-1);
             
         }
     }
     int arr[n];
     for(int i=0;i<n;i++)
     arr[i] =-1;
     
     for(int i=0;i<n;i++){
         int x = v[i].size();
         for(int j=0;j<x;j++){
             if(s.find(v[i][j])==s.end()){
                 s.insert(v[i][j]);
                 arr[i] = v[i][j];
                 break;
             }
         }
         
         
     }
     
 
     int ans =-1;
     int index =-1;
     for(int i=0;i<n;i++ ){
         if(s.find(i)==s.end()){
             ans =i;
             break;
         }
     }
     for(int i=0;i<n;i++){
         if(arr[i]==-1){
             index =i;
             break;
         }
     }
     if(ans ==-1 || index ==-1)
     cout << "OPTIMAL" << endl;
     else{
         cout << "IMPROVE" << endl;
         cout << index+1 << " " << ans +1 << endl;
     }
     
     
     
     
   }
}