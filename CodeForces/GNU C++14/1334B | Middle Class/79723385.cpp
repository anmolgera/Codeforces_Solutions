#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int n,t,i,p,q,g,s,j,f,k;
 cin>>t;
 while(t--)
 {
  cin>>p>>q;
  long long int a[p];
  for(i=0;i<p;i++)
  cin>>a[i];
  sort(a,a+p);
  s=0;
  for(i=p-1;i>=0;i--)
  {
   s=s+a[i];
   if((s/(p-i))<q)
   break;
  }
  cout<<p-i-1<<endl;
 }
}