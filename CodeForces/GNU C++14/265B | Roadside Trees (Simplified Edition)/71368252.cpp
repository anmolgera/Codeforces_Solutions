#include<iostream>
#include<algorithm>
using namespace std;
int main(){
 int n,a,e=0,s=0;
 cin>>n;
 for(int i=0;i<n;i++){
  cin>>a;
  s+=abs(a-e)+1;
  e=a;
 }
 cout<<s+n-1;
}