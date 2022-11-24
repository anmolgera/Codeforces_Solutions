#include<bits/stdc++.h>
using namespace std;
 
int xyz(int a, int b){
 
 
if(a==b){
    return 0;
}
 
if(a>b){
    if((a-b)%2 ==0 ){
        return 1;
    }
 
    else return 2;
 
 
}
else if(a<b){
 
    if((b-a)%2 == 1){
        return 1;
    }
 
   else return 2;
}
}
 
 
int main(){
 
int n;
cin>>n;
while(n--){
    int a,b;
    cin>>a>>b;
 
   cout<<xyz(a,b)<<endl;
 
 
}
 
 
 
 
 
 
}