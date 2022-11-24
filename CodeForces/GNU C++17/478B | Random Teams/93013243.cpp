#include<bits/stdc++.h>
using namespace std;
#define int long long
 
 
int32_t main() {
   
 int n,m;
 cin>>n>>m;
  
 int x = n-m;
 x++;
 
 int y = n/m;
 int sex =y;
 int blowjob = 0;
 if(n%m){
 
  blowjob = n%m;
  sex++;
 }
 
 cout<<sex*(sex-1)/2*(blowjob) + ((y)*(y-1)/2)*(m-blowjob)<<" ";
 cout<<x*(x-1)/2;
 
 
 
 
 
}
 