#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <set>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
#include <memory.h>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <cassert>
 
using namespace std;
 
typedef long long ll;
typedef pair<int,int> PII;
 
#define MP make_pair
#define PB push_back
#define FF first
#define SS second
 
#define FORN(i, n) for (int i = 0; i <  (int)(n); i++)
#define FOR1(i, n) for (int i = 1; i <= (int)(n); i++)
#define FORD(i, n) for (int i = (int)(n) - 1; i >= 0; i--)
 
#define DEBUG(X) { cout << #X << " = " << (X) << endl; }
#define PR0(A,n) { cout << #A << " = "; FORN(_,n) cout << A[_] << ' '; cout << endl; }
 
#define MOD 1000000007
#define INF 2000000000
 
int main() 
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int n,t,k,d,curr=0;
    cin>>n>>t>>k>>d;
    while(curr<=d)
    {
        n-=k;
        curr+=t;
    }
    if(n>0)
    cout<<"YES";
    else
    cout<<"NO";
}