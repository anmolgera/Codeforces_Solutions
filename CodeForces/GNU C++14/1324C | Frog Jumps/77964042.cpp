#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
 
 
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
 
 
int n;
cin>>n;
while(n--){
 
string s;
cin>>s;
 
char a = s[0];
int i =0;
int count =0;
int count1 =1;
int max1 = 0;
int max2 = 1;
int max3 =1;
while(i<s.length()){
 
 
 
 if(s[i]=='L'){
         count++;
         if(count>max1){
          max1 = count;
         }
 }
 
 else {
  count =0;
 }
 
 
 
 
 
 
  i++; 
}
cout<<max1+1<<endl;
}
}