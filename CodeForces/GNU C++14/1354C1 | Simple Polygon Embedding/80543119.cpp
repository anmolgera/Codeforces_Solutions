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
int x;
cin>>x;
 
int n = 2*x;
double pi = 2 * acos(0.0); 
 
double db = 2*pi/n;
db = db/2;
 
double r = (0.5)/tan(db);
 
cout<< setprecision(15)<<2*r<<endl;
 
 
 
 
 
}
 
 
}
 
 
 
 
 
 
 
 