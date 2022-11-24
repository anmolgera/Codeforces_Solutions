#include<bits/stdc++.h>
using namespace std;
 
#define int long long 
 
 
#define ff              first
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
 
 
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 
int32_t main(){
 
anmol();
int t;
cin>>t;
 
 
while(t--){
 
  int n;
  cin>>n;
 
  int a[n];
 
 /* for(int i =0; i<n; i++){
 
   cin>>a[i];
  }
 
  */
 
 vector<int> sex(n,0);
  map<int, vector<int>> fuckme;
  
 
  for(int i =0; i<n; i++){
 
   cin>>sex[i];
   fuckme[sex[i]].push_back(i);
  }
 
 
 vector<int> v(n,-1);
 
 
 for(auto i : fuckme){
 
   vector<int> no = i.second;
    
    int why = no.size();
    int mx = INT_MIN;
    for(int i =1; i<why; i++){
     
     mx = max(mx,no[i]-no[i-1]);
 
    }
 
     mx=max(mx,n-no[why-1]);
     mx=max(mx,no[0]+1);
 
     if(v[mx-1]==-1){
 
      v[mx-1] = i.first;
 
     }
   
 
   else {
       
       int val = i.first;
       if(val<v[mx-1]){
        v[mx-1] = val;
       }
 
 
   }
 
 
 
 }
 
 
 int pr =-1;
 
  for(int i=0;i<n;i++){
 
                if(pr==-1){
                    pr=v[i];
                }
 
                else{
                    if(v[i]==-1){
                        v[i]=pr;
                    }
                    else{
                        pr=min(v[i],pr);
                        v[i]=pr;
                    }
 
 
                }
 
 
 
        }
 
 
for(int i =0; i<v.size(); i++){
 
 
 cout<<v[i]<<" ";
}
 
cout<<endl;
 
 
 
 
}
 
 
 
 
 
}