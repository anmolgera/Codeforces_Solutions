#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--) {
        int n,y=0,y2=0,k,x,l=-5;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x==k) y=1;
            if(x>=k){
                if(i-l<3) y2=1;
                l=i;
            }
        }
        cout<<((y and (y2 or n==1)) ? "yes\n": "no\n");
    }
}