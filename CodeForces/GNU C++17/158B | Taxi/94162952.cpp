#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
int32_t main(){
 
int n;
cin>>n;
 
int a[n];
 
for(int i =0; i<n; i++){
 
    cin>>a[i];
}
 
int ans =0;
int count1= 0;
int count2 =0;
int count3 =0;
 
 
for(int i =0; i<n; i++){
 
 if(a[i]==1){
 
    count1++;
 
 }
 
 
 else if(a[i]==2){
 
    count2++;
 }
 
 
 else if(a[i]==3){
 
    count3++;
 }
 
 
 else ans++;
 
}
 
ans+=min(count3,count1);
 
int x = min(count1,count3);
 
count3-=x;
count1-=x;
 
 
ans+=count3;
 
ans+=count2/2;
 
if(count2%2){
 
    count1-=2;
    ans+=1;
 
}
 
 
ans+=(count1+3)/4;
 
 
cout<<ans<<endl;
 
 
 
 
 
 
}