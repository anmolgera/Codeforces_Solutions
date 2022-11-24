#include <bits/stdc++.h>
using namespace std;
int a[200];
 
int main()
{
 long long int n, k, i, c=0, x=0;
 char ch;
 string s;
 cin>>n>>k;
 cin>>s;
 for(i=0; i<k; i++) {
  cin>>ch;
  a[ch]++;
 }
 for(i=0; i<n; i++) {
  if(a[s[i]]) x++;
  else {
   c+=(x*(x+1))/2;
   x=0;
  }
 }
 if(x) c+=(x*(x+1))/2;
 cout<<c<<endl;
}