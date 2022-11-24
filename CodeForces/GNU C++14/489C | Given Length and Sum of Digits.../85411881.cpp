#include <bits/stdc++.h>
using namespace std;
# define int long long
# define pii pair<int,int>
//# define m 1000000007
int dx[4]= {1,-1,0,0};
int dy[4]= {0,0,1,-1};
//vector<pii> vec;
//map<pii,int> m;
signed main()
{
  int n, m;
 cin>>n>>m;
 int ans[n+1];
 if(m == 0){
  if(n==1)
            cout<<0<<" "<<0;
  else
  cout<<-1<<" "<<-1;
 }else if(n*9 < m){
  cout<<-1<<" "<<-1;
 }else{
  //min
  ans[n-1] = 1;
  int cnt = m-1;
  for(int i = 0 ; i < n-1 ; i++) ans[i] = 0;
  for(int i = 0 ; cnt && i < n ; i++){
   while(cnt && ans[i] < 9) cnt--, ans[i]++;
  }
  for(int i = n-1 ; i >= 0 ; i--)
            cout<<ans[i];
  cout<<" ";
  //max
  ans[0] = 1;
  for(int i = 1 ; i < n ; i++)
  ans[i] = 0;
  cnt = m-1;
  for(int i = 0 ; cnt && i < n ; i++){
   while(cnt && ans[i] < 9) cnt--, ans[i]++;
  }
  for(int i = 0 ; i < n ; i++)
  cout<<ans[i];
 }
 return 0;
}