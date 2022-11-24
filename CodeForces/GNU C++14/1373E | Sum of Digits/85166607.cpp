            #include<bits/stdc++.h>
            #include<ext/pb_ds/assoc_container.hpp>
            #include<ext/pb_ds/tree_policy.hpp>
            using namespace __gnu_pbds;
            using namespace std;
            # define ll long long
            # define int long long  //comment it out when MLE
            # define endl "\n"
            template <typename T>
            using ordered_set = tree<T, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>;
 
            #define gok ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
            //# define m 163577857
            # define mo 1000000007
            # define pi acos(-1)
            # define fi first
            # define se second
            #define REP(i,n) for (int i = 1; i <= n; i++)
            const ll mod = 1e9 + 7;
            //const int K = 2;
            //typedef vector<vector<int> > matrix;
 
     /*      int add(int a, int b,int mod) {
                a%=mod;
                b%=mod;
                a += b;
                if (a >= mod) a -= mod;
                if(a<0)
                {
                    a += mod;
                    a %= mod;
                }
                return a;
            }
 
            int mul(ll a, int b,int mod) {
                a%=mod;
                b%=mod;
                a *= b;
                a += mod;
                return a % mod;
            }
            int po(int a,int b,int mod)
            {
                if(b==0)
                    return 1;
                if(b%2==0)
                    return po(mul(a,a,mod),b/2,mod);
                return mul(a,po(mul(a,a,mod),(b-1)/2,mod),mod);
            }
 
 
            ll fact[2000003];
            ll inv[2000003];
 
            void fact0()
            {
                int i,j;
                fact[0]=1;
                for(i=1;i<=2000000;i++)
                {
                    fact[i]=i*fact[i-1]%mod;
                }
                inv[0]=1;
                inv[1]=1;
                ll p=mod;
                for (i=2; i<=2000000; i++)
                    inv[i] = (p - (p/i) * inv[p%i] % p) % p;
 
                for(i=2;i<=2000000;i++)
                {
                    inv[i]*=inv[i-1];
                    inv[i]%=mod;
                }
            }
            int help(int a,int b)
            {
               // cout<<a<<" "<<b<<endl;
                int an = fact[a];
                //cout<<an<<endl;
                an *= inv[b];
                an %= mod;
                an *= inv[a-b];
                an %= mod;
                return an;
            }
 
          /*  void random()
            {
              srand(time(0));
            for (int i = 0; i < n; i ++)
                perm[i] = i + 1;
            random_shuffle(perm, perm + n);
            }
int ncr(int a,int b)
{
    int tt = fact[a];
    tt %= mod;
    tt *= inv[a-b];
    tt %= mod;
    tt *= inv[b];
    tt %= mod;
    return tt;
}
 
*/
 
signed main() {
 gok
    int t;
    cin>>t;
    while(t--)
    {
 
    int n,k;
    cin>>n>>k;
 
    int req = k*(k+1);
 
    req/=2;
 
    int ar[10];
    for(int i=0;i<10;i++)
        ar[i] = i;
 
       bool ch=true;
       vector<int> nn,re;
       int pr=n;
       for(int i=0;i<18;i++)
        re.push_back(9);
 
       for(int i=0;i<=99-k;i++)
       {
           n=pr;
           int ss=0;
           for(int j=i;j<=i+k;j++)
           {
               int tt=0,tm=j;
               while(tm!=0)
               {
                   tt += tm%10;
                   tm/=10;
               }
               ss += tt;
           }
           if(i<=9 && i+k>9)
           {
              if(ss!=n)
                continue;
           }
         //  cout<<ss<<" "<<i<<endl;
           if(n>=ss && (n-ss)%(k+1)==0)
           {
               nn.clear();
               int tt=i;
               while(tt!=0)
               {
                   nn.push_back(tt%10);
                   tt/=10;
               }
 
               if(nn.size()==0)
                nn.push_back(0);
    
               ch=false;
               n-=ss;
               n/=(k+1);
               int rr = n%9;
               //if(rr!=0)
               n=n/9;
               while(n>0)
               {
                       n--;
                       nn.push_back(9);
               }
               if(rr>0)
                nn.push_back(rr);
                 reverse(nn.begin(),nn.end());
          
               bool cmp = true;
               if((int)re.size() > (int)nn.size())
               {
                  // cout<<i<<endl;
                   re=nn;
               }
               else if(re.size()==nn.size())
               {
                   for(int i=0;i<re.size();i++)
                   {
                       if(re[i]<nn[i])
                       {
                           cmp = false;
                           break;
                       }
                       else if(re[i]>nn[i])
                        break;
                   }
                   if(cmp)
                    re=nn;
               }
            
           }
       }
       if(ch)
        cout<<-1;
       else{
        bool am=true;
       for(int i=0;i<re.size();i++){
           if(am && re[i]==0 && i!=re.size()-1)
           continue;
       am=false;
        cout<<re[i];
       }
       }
 
    cout<<endl;
 
 
 
 
 
 
 
 
    }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  return 0;
}