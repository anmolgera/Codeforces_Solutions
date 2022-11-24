#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  int n;
  int a=0,b=0,x,y;
  bool flag=1;
  cin>>n;
  while(n--)
  {
   cin>>x>>y;
   if (x<y||x<a||y<b||y-b>x-a) flag=0;
   a=x,b=y;
  }
  if(flag==0)
  cout<<"NO\n";
  else
  cout<<"YES\n";
 }
}