#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<queue>
#include<set>
#include<map>
#include<iostream>
using namespace std;
#define ll long long
#define REP(a,b,c) for(int a=b;a<=c;a++)
#define re register
#define file(a) freopen(a".in","r",stdin);freopen(a".out","w",stdout)
typedef pair<int,int> pii;
#define mp make_pair
inline int gi()
{
 int f=1,sum=0;char ch=getchar();
 while(ch>'9' || ch<'0'){if(ch=='-')f=-1;ch=getchar();}
 while(ch>='0' && ch<='9'){sum=(sum<<3)+(sum<<1)+ch-'0';ch=getchar();}
 return f*sum;
}
const int N=5010,Mod=998244353;
int n,a[N][N],c[N][N];
int main()
{
 n=gi();c[1][1]=c[2][1]=c[2][2]=1;
 for(int i=3;i<=n;i++)
 {
  int l=i-1,r=2;c[i][1]=1;
  for(int j=2;j<=n;j++)
  {
   c[i][j]=(1ll*c[i-1][j-1]*l%Mod+1ll*c[i-1][j]*r%Mod)%Mod;
   l--;r++;
  }
 }
 a[1][1]=1;
 for(int i=2;i<=n;i++)
 {
  a[i][i]=1;
  for(int j=1;j<i;j++)
  {
   a[i][j]=(1ll*a[i-1][j]*i%Mod+c[i][j])%Mod;
  }
 }
 for(int i=1;i<=n;i++)printf("%d%c",a[n][i]," \n"[i==n]);
 return 0;
}