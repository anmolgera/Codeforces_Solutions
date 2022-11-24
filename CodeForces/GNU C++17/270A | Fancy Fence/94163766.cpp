#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
int32_t main(){
 
int n;
cin>>n;
 
while(n--){
 
    double a;
    cin>>a;
 
    double i =3;
    bool flag = false; 
 
     
    if(a<60){
 
        cout<<"NO"<<endl;
    }
       
       else {
        while(true){
        double x = ((i-2)*(180))/i;
          if(x==a){
             
             flag = true;
             break;
 
          }
 
          else if(x>a){
            break;
          }
          i++;
 
    }
 
 if(flag){
 
    cout<<"YES"<<endl;
 }
 
 else cout<<"NO"<<endl;
}
 
 }
 
 
 
 
}