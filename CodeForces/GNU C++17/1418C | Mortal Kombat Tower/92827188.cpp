#include <bits/stdc++.h>
using namespace std ;
# define int long long 
 
int32_t main(){
    int t ;
    cin >> t ;
    while(t--){
        
     int n;
     cin>>n;
     /*int a[n];
     int b[n];
     
     //std::vector<char> v;
     vector<int> v;
     vector<int>v1;
 
     vector<bool> v2(n,false);
 
 
     for(int i =0; i<n; i++){
 
 
        cin>>a[i];
 
     }
 
 
     for(int i =0; i<n; i++){
 
 
        cin>>b[i];
 
        if(b[i]==0){
            v.push_back(a[i]);
            v2[i] = true;
        }
 
        else {v1.push_back(a[i]);
 
               }
 
 
     }
     
     int sum =0;
     for(int i =0; i<v1.size(); i++){
 
      sum+=v1[i];
     }
 
 
 
 
     sort(v.begin(),v.end());
     
     reverse(v.begin(),v.end());
     
     int j =0;
     for(int i =0; i<n; i++){
 
      if(v2[i]){
       a[i] = v[j];
       j++;
 
      }
 
 
     }
 
     for(int i =0; i<n; i++){
 
 
        cout<<a[i]<<" ";
     }
    
  cout<<endl;
*/
 
 
     int a[n];
 
     for(int i=0; i<n; i++){
 
        cin>>a[i];
     }
    int sum =0;
    if(a[0]==1)
    {
        sum++;
    }
 
    //cout<<sum<<" HI"<<endl;
 
   int count =0;
    for(int i=1; i<n; i++){
      
         if(a[i]==1){
 
            count++;
 
            if(i == n-1){
                
                if(count>2){
                sum+=(count/3);
              }
            }
         }
 
         else {
 
            if(count>2){
            sum+=(count/3);
            }
            count =0;
         }
 
 
    }
 
    cout<<sum<<endl;
 
   
}
}