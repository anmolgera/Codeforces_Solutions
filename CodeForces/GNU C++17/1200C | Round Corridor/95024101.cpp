#include <iostream>
#include <set>
#include <map>
#include<bits/stdc++.h>
 
using namespace std;
 
set <char> pokemonList;
map <char, int> cur;
char s[100005];
#define int long long 
int32_t main()
{
    ios_base::sync_with_stdio(false);
 
    int n,m,q;
    cin>>n>>m>>q;
   
 
    int k = __gcd(n,m);
    n /=k;
    m/=k;
 
    int a[3];
    a[1] = n;
    a[2] = m;
 
    while(q--){
 
      int x,y,x1,y1;
      cin >>x >> y>> x1>> y1;
      y1--;
      y--;
 
      if(y/a[x]==y1/a[x1]){
        cout<<"YES"<<endl;
      }
 
      else cout<<"NO"<<endl;
 
 
    }
 
 
 
 
    return 0;
}