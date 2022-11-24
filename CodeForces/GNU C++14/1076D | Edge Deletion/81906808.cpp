#include <bits/stdc++.h>
 
using namespace std;
 
vector<pair<int, pair<int, int> > > g[300043];
 
int main()
{
 int n, m, k;
 scanf("%d %d %d", &n, &m, &k);
 for(int i = 0; i < m; i++)
 {
  int x, y, w;
  scanf("%d %d %d", &x, &y, &w);
  --x;
  --y;
  g[x].push_back(make_pair(y, make_pair(w, i)));
  g[y].push_back(make_pair(x, make_pair(w, i)));
 }
 set<pair<long long, int> > q;
 vector<long long> d(n, (long long)(1e18));
 d[0] = 0;
 q.insert(make_pair(0, 0));
 vector<int> last(n, -1);
 int cnt = 0;
 vector<int> ans;
 while(!q.empty() && cnt < k)
 {
  auto z = *q.begin();
  q.erase(q.begin());
  int k = z.second;
  if(last[k] != -1)
  {
   cnt++;
   ans.push_back(last[k]);
  }
  for(auto y : g[k])
  {
   int to = y.first;
   int w = y.second.first;
   int idx = y.second.second;
   if(d[to] > d[k] + w)
   {
    q.erase(make_pair(d[to], to));
    d[to] = d[k] + w;
    last[to] = idx;
    q.insert(make_pair(d[to], to));
   }
  }
 }  
 printf("%d\n", ans.size());
 for(auto x : ans) printf("%d ", x + 1);
}