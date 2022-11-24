#include <bits/stdc++.h>
using namespace std;
 
#define li long long int
 
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
  
li t;
cin>>t;
while(t){
   t--;
    li n;
    cin>>n;
    li a[n];
    for(int i=0;i<n;i++)
   cin>>a[i];
   
   int end =n-1;
   while(end>=0 && a[end]==(end+1)){
       end--;
   }
   int start=0;
    while(start<n && a[start]==(start+1)){
       start++;
   }
   if(end<0)
   cout << 0 << endl;
   else{
       bool all = true;
       for(int i=start;i<=end;i++){
           if(a[i]==(i+1)){
               all=false;
               break;
           }
       }
       if(all)
       cout << 1 << endl;
       else
       cout << 2 << endl;
   }
   
  
 
    }
}
  
    
    
    
    