#include <iostream>
#include<bits/stdc++.h>
#define li long long int
using namespace std;
 
int main()
{
    int t;
    cin>>t;
 
    while(t--){
 
        int n;
        cin>>n;
 
        if((n%4)==0){
 
      
            string x="";
            int count8=n/4;
            int count9=n-count8;
 
            for(int i=0;i<count8;i++){
               
                x+='8';
            }
 
     
            string y="";
            for(int i=0;i<count9;i++){
    
                y+='9';
            }
 
            cout<<y+x<<endl;
 
        }
 
        else{
 
            
            string x="";
            int count8=(n/4)+1;
            int count9=n-count8;
 
            for(int i=0;i<count8;i++){
     
                x+='8';
            }
 
            
            string y="";
            for(int i=0;i<count9;i++){
                
                y+='9';
            }
 
           
            cout<<y+x<<endl;
 
 
        }
 
 
 
    }
 
    return 0;
}
 
 
 
 
 
 
   
 
 
 
 
 
 
 
  
 
  
  
 
   