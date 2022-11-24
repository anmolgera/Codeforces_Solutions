#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
 
using namespace std;
lli ar[11];
string st = "codeforces";
 
bool isValid(lli k)
{
 lli res = 1;
 for(int i=1;i<=10;i++)
 {
  res *= ar[i];
  if(res >= k) return true;
 }
 
 return false;
}
int main()
{
 REP(i , 10) ar[i] = 1;
 lli k;
 cin>>k;
 int i = 0;
 
 if(k > 1)
 while(1)
 {
  i++;
  if(i > 10) i = 1;
  ar[i]++;
  if(isValid(k))
  break;
 }
 
 for(int i=1;i<=10;i++)
 {
  while(ar[i]--)
  cout<<st[i-1];
 }
}