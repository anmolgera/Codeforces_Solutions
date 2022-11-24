#include<bits/stdc++.h>
using namespace std;
#define int long long
 
/*#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
//#define vi              vector<int>
#define mii             map<int,int>
//#define my              unordered_map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define ml(brr,n,type)  type *brr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
 */
 
 
 
 
int sex[502][502];
//int a[2000];
int n,m;
int cnt ;
int sr,sc;
 
void dfs(int sr, int sc){
 
 if(sr>=n || sc>=m || sr<0 || sc<0 || cnt==0){
  return;
 }
 
 if(sex[sr][sc]==0 || sex[sr][sc] ==2 ) {return ;} 
 cnt--;
 //cout<<cnt<<endl;
 sex[sr][sc] = 2;
 
dfs(sr+1,sc);
dfs(sr,sc+1);
dfs(sr-1,sc);
dfs(sr,sc-1);
return;
 
 
 
 
 
 
 
}
 
 
 
 
int32_t main(){
 
 int k;
 cin>>n>>m>>k;
 
 
 vector<string> v;
 
 for(int i =0; i<n; i++){
 
    string s;
    cin>>s;
 
 
    v.push_back(s);
 
 
 }
 
 
 sr=0,sc=0;
 for(int i =0; i<n; i++){
 
  for(int j =0; j<m; j++){
 
      if(v[i][j]=='#'){
 
        sex[i][j] =0;
      }
 
      else if(v[i][j]=='.'){sex[i][j] =1;
                 sr =i;
                 sc =j;
                 cnt++;   
 
                    }
 
 
  }
 }
//cout<<cnt<<"Hi"<<endl;
cnt=cnt-k;
//cout<<cnt<<" ";
dfs(sr,sc);
//cout<<cnt<<endl;
 
 
/*for(int i =0; i<n; i++){
 
 
  for(int j =0; j<m; j++){
 
   cout<<sex[i][j];
  }
 
  cout<<endl;
}
*/
for(int i =0; i<n; i++){
 
  for(int j =0; j<m; j++){
 
         if(sex[i][j]==2){
          cout<<".";
         }
      
        else if(sex[i][j]==0){
 
          cout<<"#";
        }
      
      else cout<<"X";
 
  }
  cout<<endl;
}
 
 
 
}