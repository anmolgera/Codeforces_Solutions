    #include <bits/stdc++.h>
    using namespace std;
    #define gok ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define endl "\n"
    # define int long long
    # define ll long long
    #define pb push_back
    const int N = 300005,mod = 1000000007;
 
 
    signed main(){
 
        gok
 
        int t;
        cin>>t;
        while(t--)
        {
 
            int n,m;
            cin>>n>>m;
 
            int ar[n][m],dp[n],res[n][m];
            memset(res,-1,sizeof(res));
            vector<pair<int,pair<int,int>>> vv;
            for(int i=0;i<n;i++)
                for(int j=0;j<m;j++){
                cin>>ar[i][j];
                vv.pb({ar[i][j],{i,j}});
                }
 
            sort(vv.begin(),vv.end());
 
            for(int i=0;i<m;i++)
            {
                int x = vv[i].second.first;
                int y = vv[i].second.second;
               // cout<<x<<" "<<y<<endl;
                int wt = vv[i].first;
                res[x][i] = wt;
                ar[x][y]=-1;
            }
 
            for(int i=0;i<n;i++)
            {
                int idx=0;
                for(int j=0;j<m;j++)
                {
                    while(res[i][idx]!=-1)
                        idx++;
                    if(ar[i][j]==-1)
                        continue;
                    res[i][idx++] = ar[i][j];
                }
            }
 
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                    cout<<res[i][j]<<" ";
                cout<<endl;
            }
 
 
        }
 
 
 
 
 
 
 
 
 
 
 
 
      return 0;
    }