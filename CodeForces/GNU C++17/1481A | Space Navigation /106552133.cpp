#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main(){
 
    int t;
    cin>>t;
    while(t--){
 
 
         int x,y;
         cin>>x>>y;
 
         string s;
         cin>>s;
         
         int countl =0;
         int countr =0;
         int countu =0;
         int countd  =0;
         if(x>0){
               countr+=x;
         }
 
         else if(x<0){
            countl +=abs(x);
         }
 
         if(y>0){
            countu+=y;
         }
 
         else if(y<0){
            countd+=abs(y);
         }
         
         int tempr =0;
         int templ =0;
         int tempu =0;
         int tempd =0;
 
         for(int i =0; i<s.length(); i++){
 
            if(s[i]=='R'){
               tempr++;
            }
             if(s[i]=='L'){
                 templ++;
            }
             if(s[i]=='U'){
                tempu++;
            }
             if(s[i]=='D'){
                tempd++;
            }
         }
       
       bool flag1 = true;
       bool flag2 = true;
       bool flag3 = true;
       bool flag4 = true;
 
       if(x==y && x==0){
        cout<<"YES"<<endl;
       }
 
       else {
 
         if(x>0){
               if(tempr<countr){
                  flag1 = false;
               }
         }
 
         else if(x<0){
              
              if(templ<countl){
                  flag2 = false;
              }
         }
 
         if(y>0){
            
            if(tempu<countu){
              flag3 = false;
            }
         }
 
         else if(y<0){
            if(countd>tempd){
                  flag4 = false;
            }
       }
     
    }
 
    if(x >=0 && y>=0 ){
 
        if(flag3 && flag1){
              cout<<"YES"<<endl;
        }
 
         else {
 
      cout<<"NO"<<endl;
    }
    }
 
    else if( x >=0 && y <= 0){
 
        if(flag4 && flag1){
              cout<<"YES"<<endl;
        }
 
         else {
 
      cout<<"NO"<<endl;
    }
 
 
    }
 
    else if(x <=0 && y >= 0){
     
     if(flag2 && flag3){
              cout<<"YES"<<endl;
        }
 
         else {
 
      cout<<"NO"<<endl;
    }
 
 
    }
 
    else if( x<=0 && y <= 0){
 
        if(flag2 && flag4){
              cout<<"YES"<<endl;
        }
 
         else {
 
      cout<<"NO"<<endl;
    }
    }
 
   
}}