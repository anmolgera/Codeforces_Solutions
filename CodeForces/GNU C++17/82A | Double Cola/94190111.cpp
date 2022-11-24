#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
int32_t main(){
 
// /string s;
 
int n;
cin>>n;
n--;
 
int k = 5;
while(n>=k){
 
n-=k;
k =2*k;
 
}
 
 
 
string s[5]={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
cout<<s[n/(k/5)]<<endl;
 
}
 
 