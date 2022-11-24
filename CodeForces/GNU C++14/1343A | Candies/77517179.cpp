#include<bits/stdc++.h>
using namespace std;
int main(){
 
int n;
cin>>n;
while(n--){
 
int a;
cin>>a;
int sum =1;
for( int i =2; i<a; i++){
sum+=pow(2,i-1);
 
if(a%sum==0){
    cout<<a/sum<<endl;
    break;
}
 
else continue;
 
 
 
}
 
 
}
 
}