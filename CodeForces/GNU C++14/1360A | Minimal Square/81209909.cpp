 #include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5 ;
int a[N] , dp[N] , brr[N] ;
 
 
 
 
 
 
//#include <bits/stdc++.h>
//using namespace std;
//int a[200];
 
int main()
{
    long long int n, k, i, c=0, x=0;
    int t;
    cin >> t;
    while(t--){
 
    int a,b;
    cin>>a>>b;
 
    if(max(a,b)>2*min(a,b)){
        cout<<max(a,b)*max(a,b)<<endl;
    }
 
    else cout<<(2*min(a,b))*(2*min(a,b))<<endl;
    }
}
 