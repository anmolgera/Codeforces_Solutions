#include <bits/stdc++.h>
 
using namespace std;
vector <int> g[50001];
int arr[50001][501];
int ans=0;
 
void dfs(int source,int k,int visit[])
{
 arr[source][0]=1;
 visit[source]=1;
 for(auto i:g[source])
 {
  if(visit[i]) continue;
  dfs(i,k,visit);
  for(int j=k-1;j>=0;j--)
  {
   ans+=arr[source][j]*arr[i][k-j-1];
   arr[source][j+1]+=arr[i][j];
  }
 }
}
int main()
{
 int n,k;
 cin>>n>>k;
 for(int i=1;i<n;i++)
 {
  int x,y;
  cin>>x>>y;
  g[x].push_back(y);
  g[y].push_back(x);
 }
 memset(arr,0,sizeof(arr));
 int visit[n+1];
 memset(visit,0,sizeof(visit));
 dfs(1,k,visit);
 cout<<ans<<endl;
}