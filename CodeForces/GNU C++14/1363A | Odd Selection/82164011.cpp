 #include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5 ;
int a[N] , dp[N] , brr[N] ;
 
 
 
 
 
 
//#include <bits/stdc++.h>
//using namespace std;
//int a[200];
 
int main()
{
  int t;
  cin>>t;
 
  while(t--){
 
   int n,x;
   cin>>n>>x;
 
 
 
   for(int i =0; i<n; i++){
 
    cin>>a[i];
   }
 
int count =0;
int sum =0;
for(int i =0; i<n; i++){
 
    if(a[i]%2==1){
        count++;
    }
  sum +=a[i];
 
}
   
 
int odd = count;
int even = n-count;
 
 
if(odd==0){
    cout<<"No"<<endl;
}
 
else if(x==n){
 
 
 
    
 
    if(sum &1){
        cout<<"Yes"<<endl;
    }
 
    else cout<<"No"<<endl;
}
 
 
else if(even ==0){
 
 
    if(x&1){
        cout<<"Yes"<<endl;
    }
 
 
    else cout<<"No"<<endl;
}
 
else cout<<"Yes"<<endl;
 
  }
 
}
 