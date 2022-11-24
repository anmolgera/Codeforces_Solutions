#include <bits/stdc++.h>
using namespace std;
 
#define li long long int
 
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
int gcd(int a,int b){
    if(b==0)
    return a;
    return gcd(b,a%b);
}
 
bool valid(int x,int y,int n,int m){
    if(x>=0 && y>=0 && x<n && y<m)
    return true;
    return false;
}
 
 
 
 
int main(){
    anmol();
    int t;
    cin>>t;
    while(t--){
        int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)  
  {
    cin>>arr[i];
  }
  string s="";
  vector<string > v;
  for(int i=0;i<200;i++)
  {
    s+='a';
  }
  v.push_back(s);
  for(int i=0;i<n;i++)
  {
    int val=arr[i];
      int j=0;
      string news="";
    news+=s.substr(0,val);
    j=val;
  
    while(j<s.length())
    {
      if(s[j]=='a')
      news+="z";
        else
      news+="a";
 
      j++;
 
    }
 
    v.push_back(news);
    s=news;
 
 
  }
 
for(int i=0;i<v.size();i++)
{
  cout<<v[i]<<endl;
} 
 
      
 
 
 
 
 
 
 
 
    }
   
 
 
 
   
 
    
}