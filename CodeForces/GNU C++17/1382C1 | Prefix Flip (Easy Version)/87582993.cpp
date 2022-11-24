#include<bits/stdc++.h>
using namespace std;
 
 
#define int             long long
 
 
void c_p_c()
{
    //fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("output.txt", "w", stderr);
    #endif
}
 
const int N = 1e6 + 5 ;
//int a[N] , b[N] , freq[N];
 
 
 
 
bool check(string s1, string s2){
 
 
  int n = s1.length();
 
  for(int i =0; i<n; i++){
 
 
    if(s1[i]!=s2[i]){
 
        return false;
    }
  }
 
return true;
 
 
 
}
 
/*void func(string s1, string s2){
 
 int n = s1.length();
 
   return;
 
 
 
 
 
 
  }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}
*/
int32_t main()
{
    c_p_c();
    
     int t;
     cin>>t;
 
     while(t--){
 
     int n;
     cin>>n;
 
     string a;
     string b;
 
     cin>>a;
     cin>>b;
 
      /*check(s1,s2);
     //func(s1,s2);
     if( check(s1,s2)) cout<<"Hi"<<endl;
      else cout<<"no"<<endl;
 
     */ 
 
 
     vector<int> v;
 
     for(int i = n-1; i>=0; i--){
 
          if(a[i]!=b[i]){
 
 
            if(a[0]==b[i]){
 
                 if(a[0]=='0'){
 
 
                    a[0] ='1';
                 }
               
               else a[0] ='0';
 
               v.push_back(1);
              
 
            }
 
          for(int j =0; j<=i; j++){
 
 
             if(a[j]=='0'){
 
                a[j] ='1';
             }
 
             else a[j] ='0';
 
 
 
          }
 
          v.push_back(i+1);
        int s =0;
        int e = i;
          while(s<=e){
                    char temp=a[s];
                    a[s]=a[e];
                    a[e]=temp;
                    s++;
                    e--;
                }
 
 
 
 
 
          }
 
 
 
 
 
     }
 
     cout<<v.size()<<" ";
     for(int i =0; i<v.size(); i++){
 
 
        cout<<v[i]<<" ";
     }
 
     cout<<endl;
 
}}