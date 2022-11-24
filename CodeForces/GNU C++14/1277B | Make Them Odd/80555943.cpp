#include<bits/stdc++.h>
using namespace std;
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
int main(){
anmol();
int t;
cin>>t;
 
while(t--){
set<int> a;
int n;
cin>>n;
 
 
 
for(int i =0; i<n; i++){
    int m;
    cin>>m;
 a.insert(m);
}
 
int res =0;
while(!a.empty()){
 
 
 int c = *a.rbegin();
 a.erase(c);
 if(c%2==0){
 
        res++;
  c = c/2;
  a.insert(c);
 }
}
 
cout<<res<<endl;
 
}
 
 
}
 
 
 
 
 
 
 
 