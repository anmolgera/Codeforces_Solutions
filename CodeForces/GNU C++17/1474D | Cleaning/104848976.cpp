#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define pb push_back
#define pii pair<int,int>
#define endl '\n'
#define gok ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const ll mod = 1e9 + 7,mxn=2e5 + 5;
int a[mxn],prf[mxn],suf[mxn];
signed main(){
    gok
//   ss();
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       prf[n+1]=suf[n+1]=prf[0]=suf[0]=0;
       for(int i=1;i<=n;i++){
        cin>>a[i];
        prf[i] = 1e18;
        suf[i] = 1e18;
       }
       if(n==2)
       {
           if(a[1]==a[2])
            cout<<"YES";
           else
            cout<<"NO";
           cout<<endl;
           continue;
       }
       prf[1]=a[1];
       for(int i=2;i<=n;i++)
       {
           int d = a[i] - prf[i-1];
           if(d<0)
            break;
           prf[i] = d;
       }
       suf[n] = a[n];
       for(int i=n-1;i>=1;i--)
       {
           int d = a[i] - suf[i+1];
           if(d<0)
            break;
           suf[i] = d;
       }
 
       /*for(int i=0;i<=n+1;i++)
        cout<<prf[i]<<" ";
        cout<<endl;
        for(int i=0;i<=n+1;i++)
        cout<<suf[i]<<" ";
        cout<<endl;*/
       bool ch=false;
       for(int i=0;i<=n-2;i++)
       {
           int v1 = prf[i],v2=a[i+1],v3 = a[i+2],v4=suf[i+3];
           if(v1==1e18 || v2==1e18)
            continue;
           int d1 = v2-v1,d2=v3-v4;
           if(d1>=0 && d1==d2)
           {
               ch=true;
               break;
           }
           swap(v3,v2);
           d1 = v2-v1;
           d2=v3-v4;
           if(d1>=0 && d1==d2)
           {
               ch=true;
               break;
           }
       }
     if(ch)
        cout<<"YES";
     else
        cout<<"NO";
     cout<<endl;
 
    }
 
 
 
 
 
 
 
    return 0;
 
 
}
 
 
 