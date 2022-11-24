#include<bits/stdc++.h>
using namespace std;
int main(){
 
int n;
cin>>n;
while(n--){
 
int a;
cin>>a;
 
 
 
if( (a/2)%2==1 || a%2==1){
    cout<<"NO"<<endl;
}
else if (a==4){
 
    cout<<"YES"<<endl<<"2"<<" "<<"4"<<" "<<"1" <<" "<<"5"<<endl;
 
 
 
 
 
}
 
else if (a!=4){
 
cout<<"YES"<<endl;
int sum =0;
for( int i =2; i<=a; i = i+2){
    cout<<i<<" ";
    sum +=i;
}
 
    int sum2=0;
    for(int i=1;i<a-1; i =i+2){
        cout<<i<<" ";
        sum2+=i;
    }
 
    cout<<sum-sum2<<" ";
 
   cout<<endl;
}
 
 
 
 
 
 
}
 
 
 
 
 
 
 
 
}