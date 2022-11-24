#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define int long long
#define gok ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define mo 1000000007
 
signed main(){
    gok
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        if(n==1){
            if(a[0]%2==1)
            cout<<-1;
        else
        {
            cout<<1<<endl;
            cout<<1;
        }
        }
        else
        {
           int id=-1;
           for(int i=0;i<n;i++)
           {
               if(a[i]%2==0)
               {
                   id=i+1;
                   break;
               }
           }
           if(id==-1)
           {
               cout<<2<<endl;
               cout<<1<<" "<<2;
           }
           else
           {
               cout<<1<<endl;
               cout<<id;
           }
        }
        cout<<endl;
    }
 
    return 0;
}