 
 
 
      #include<bits/stdc++.h>
 
using namespace std;
 
 
//#define int             long long
 
 
/*void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
*/
const int N = 1e6 + 5 ;
 int a[N], b[N] , freq[N];
 
 
 
 
int main(){
 
  //anmol();
 
   int n,m;
   cin>>n>>m;
 
   int c = n;
   int d = m;
 
 
 
 
   vector<string> v1 ;
   vector<string>v2 ;
 
 
   for(int i =0; i<n; i++){
 
      string str;
      cin>>str;
      v1.push_back (str);
 
   }
 
   for(int i =0; i<m; i++){
 
      string str;
      cin>>str;
      v2.push_back(str);
 
   }
 
  /*for (int i = 0; i <v1.size(); ++i)
  {
     cout<<v1[i]<<" ";
  }
  cout<<endl;
 
  for(int i =0; i<v2.size(); i++){
 
   cout<<v2[i]<<" ";
 
  }
  cout<<endl;
 
 */
   int t;
   cin>>t;
 
 
   for(int i =0; i<t; i++){
 
    cin>>a[i];
   }
 
   for(int i =0; i<t; i++){
 
    int y = a[i];
 
      // string s ="";
   //cout<<v1[(y%n)-1]<<endl;
   //cout<<v2[(y%m)-1]<<endl;
 
   int a = y%c;
 
   if(a ==0){
    a =n;
   }
   //cout<<a<<endl;
 
   int z = y%d;
 
   if(z ==0){
 
    z = m;
   }
  // cout<<z<<endl;
 
   string s1 = v1[a-1];
   string s2 = v2[z-1];
   //cout<<q<<endl;
   //cout<<
   cout<<s1+s2<<endl;
 
 
 
 
 
   }
 
 
 
 
 
 
 
 
  }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 