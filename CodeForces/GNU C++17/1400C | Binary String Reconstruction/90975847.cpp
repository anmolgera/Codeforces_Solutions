#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
 
#define ff              first
//#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
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
 
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
 
/*void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 */
 
bool sign(int num){
  return num>0;
}
 
 
 
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 
 /*#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
 
#define ff              first
//#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
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
 
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
 
/*void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 
bool sign(int num){
  return num>0;
}
 
 
 
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
 
 
 
int32_t main() 
{ 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
anmol();
 int t;
 cin>>t;
 int j =1;
 while(t--){
 int n;
 cin>>n;
 
 int a[n];
 
 for(int i =0; i<n; i++){
 
  cin>>a[i];
 }
 
 if(n<=2){
 
  cout<<"Case #"<<j++<<": "<<n<<endl;
 }
 
 
 else {
 
 int b[n];
 b[0] = a[0];
 for(int i =1; i<n; i++){
 
  b[i] = a[i]-a[i-1];
 
 }
 
int c[n];
c[n-1] = a[n-1];
 
for(int i =n-2; i>=0; i--){
 
  c[i] = a[i+1]-a[i];
}
 
 
 
 
 int count1= 1;
 
int count2 =1;
int max_count =1;
 for(int i =0; i<n; i++){
 
 if(b[i]==b[i-1]){
 
  count1++;
  if(count1>max_count){
 
    max_count = count1;
  }
 }
 
 else count1 =1;
 }
 
 for(int i =0; i<n; i++){
 
 if(c[i]==c[i-1]){
 
  count2++;
  if(count2>max_count){
 
    max_count = count2;
  }
 }
 
 else count2 =1;
 }
 
 if(max_count ==n){
 
  cout<<"Case #"<<j++<<": "<<max_count<<endl;
 }
 else cout<<"Case #"<<j++<<": "<<max_count+1<<endl;
 }
}
}
 
 */
 
 
 
 
 
 
int32_t main() 
{ 
     anmol();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
 
 
    int t;
    cin>>t;
 
    while(t--){
 
        string s;
        cin>>s;
 
        int n=s.length();
 
        int x;
        cin>>x;
 
        string ss="";
 
        for(int i=0;i<n;i++){
            ss+='2';
        }
 
        for(int i=0;i<n;i++){
            if(s[i]!='0'){
                continue;
            }
            else{
                if(i-x>=0){
                    ss[i-x]='0';
                }
                if(i+x<n){
                    ss[i+x]='0';
                }
            }
        }
 
        bool flag=true;
 
       
 
        for(int i=0;i<n;i++){
            if(ss[i]=='0'){
                continue;
            }
            else{
                ss[i]='1';
            }
        }
 
        for(int i=0;i<n;i++){
 
            if(s[i]=='1'){
 
                if(i-x>=0){
                    if(ss[i-x]=='1'){
                        continue;
                    }
                }
 
                if(i+x<n){
                    if(ss[i+x]=='1'){
                        continue;
                    }
                }
 
                flag=false;
                break;
 
            }
 
            else{
 
                if(i-x>=0){
                    if(ss[i-x]=='0'){
                      if(i+x<n){
                        if(ss[i+x]=='0'){
                                continue;
                            }
                        else{
                                flag=false;
                            break;
                            }
                        }
              else{
                continue;
                        }
                    }
 
                    else{
                        flag=false;
                        break;
                    }
 
                }
                else{
                    if(i+x<n){
                        if(ss[i+x]=='0'){
                            continue;
                        }
                        else{
                            flag=false;
                            break;
                        }
                    }
                }
 
 
 
            }
 
 
 
        }
 
        if(!flag){
            cout<<-1<<endl;
        }
        else{
            cout<<ss<<endl;
        }
 
 
    }
 
    return 0;
}
 
 
 
 
 
 
 
 
 
 
    
    
 
 
 
 
 
 
 
 
 
    
    