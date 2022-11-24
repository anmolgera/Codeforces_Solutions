#include<bits/stdc++.h>
using namespace std;
int main()
{   int n,i,j,k;
 cin>>n;
 for(j=0;j<=2*n;j++)
 {
 
  k=0;
  i=n-abs(j-n);
        k=0;
        while(k<n-i){cout<<"  "; k++;}
  k=i;
  while(k>-i)
  {
   cout<<i-abs(k)<<" ";k--;
  }
  cout<<0<<"\n";
 }
}