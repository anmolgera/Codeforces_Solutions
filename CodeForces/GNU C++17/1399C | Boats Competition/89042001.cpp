#include <iostream>
    #include <bits/stdc++.h>
    #define int long long 
    using namespace std;
     
 
    #define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
//#define vi              vector<int>
#define mii             map<int,int>
//#define my              unordered_map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define ml(brr,n,type)  type *brr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
     
 
    int32_t main()
    {
        int t;
        cin>>t;
     
        while(t--){
     
            int n;
            cin>>n;
            vector<int> v;
            //vector<int> v2;
     
     
     
            for(int i=0;i<n;i++){
                int x;
                cin>>x;
     
                v.push_back(x);
                //kejnfvklfnklfvf 
            }
     
     
            sort(v.begin(),v.end());
     
            if(n==1){
                cout<<0<<endl;
            }
            else if(n==2||n==3){
                cout<<1<<endl;
            }
     
            else{
                int mini=v[0]+v[1];
                int maxi=v[n-1]+v[n-2];
     
                int ans=0;
     
                for(int i=mini;i<=maxi;i++){
     
                    int j=0;
                    int k=n-1;
     
                    int c_count=0;
     
                    while(k>j){
     
                        if(v[j]+v[k]==i){
                            c_count++;
                            j++;
                            k--;
                        }
                        else if(v[j]+v[k]>i){
                            k--;
                        }
                        else{
                            j++;
                        }
     
     
     
                    }
     
                    ans=max(ans,c_count);
     
                }
     
                cout<<ans<<endl;
            }
     
        }
     
        return 0;
    }