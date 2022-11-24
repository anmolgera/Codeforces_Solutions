#include <iostream>
#include<bits/stdc++.h>
#define int  long long 
using namespace std;
 
int32_t main()
{
    int t;
    cin>>t;
 
    while(t--){
        int a,b,n,m;
        cin>>a>>b>>n>>m;
 
        if(n+m>a+b){
            cout<<"NO"<<endl;
        }
 
        else{
 
            if(m<=min(a,b)){
 
                cout<<"YES"<<endl;
 
            }
 
            else if(m>max(a,b)){
 
                cout<<"NO"<<endl;
 
            }
            else{
 
                if(max(a,b)-n>=min(a,b)){
                    cout<<"NO"<<endl;
                }
                else{
 
                    cout<<"NO"<<endl;
 
                }
            }
 
        }
 
    }
 
    return 0;
}