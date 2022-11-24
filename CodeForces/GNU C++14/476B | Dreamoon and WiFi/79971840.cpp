#include <bits/stdc++.h>
using namespace std;
 
int f(int n,int h) {
 if(n)
  return f(n-1,h+1)+f(n-1,h-1);
 else if(h==0) return 1;
 else return 0;
}
 
 
int main() {
 string a,b;
 cin>>a>>b;
 int i,c,d,e;
 c=d=e=0;
 for(i=0;i<a.length();i++) {
  if(a[i]=='+') c++;
  if(a[i]=='-') c--;
  if(b[i]=='+') d++;
  if(b[i]=='-') d--;
  if(b[i]=='?') e++;
 }
 printf("%0.9f\n",(double)f(e,c-d)/pow(2,e));
}