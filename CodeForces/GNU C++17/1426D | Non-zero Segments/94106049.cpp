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
 
 
// C++ program to find number of subarrays 
// with sum exactly equal to k. 
//#include <bits/stdc++.h> 
//using namespace std; 
 
// Function to find number of subarrays 
// with sum exactly equal to k. 
int findSubarraySum(int arr[], int n, int sum) 
{ 
    // STL map to store number of subarrays 
    // starting from index zero having 
    // particular value of sum. 
    unordered_map<int, int> prevSum; 
 
    int res = 0; 
 
    // Sum of elements so far. 
    int currsum = 0; 
 
    for (int i = 0; i < n; i++) { 
 
        // Add current element to sum so far. 
        currsum += arr[i]; 
 
        // If currsum is equal to desired sum, 
        // then a new subarray is found. So 
        // increase count of subarrays. 
       if (currsum == sum) 
            res++; 
    
        // currsum exceeds given sum by currsum 
        // - sum. Find number of subarrays having 
        // this sum and exclude those subarrays 
        // from currsum by increasing count by 
        // same amount. 
        if (prevSum.find(currsum - sum) != prevSum.end()) 
            res += (prevSum[currsum - sum]); 
 
        // Add currsum value to count of 
        // different values of sum. 
        prevSum[currsum]++; 
    } 
 
    return res; 
} 
 
/*int main() 
{ 
    int arr[] = { 10, 2, -2, -20, 10 }; 
    int sum = -10; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << findSubarraySum(arr, n, sum); 
    return 0; 
} 
 
*/
 
int32_t main(){
 
anmol();
int n;
cin>>n;
 
 
int a[n];
int sum =0;
for(int i =0; i<n; i++){
 
    cin>>a[i];
   // sum+=a[i];
}
 
 
/*int x = findSubarraySum(a,n,0);
 
if(sum==0){
    cout<<x/2<<endl;
}
 
 
else cout<<x<<endl;
*/
 
int sex =0;
int s =0;
 
 
unordered_map<int,int> mp;
 
for(int i =0; i<n; i++){
 
    sum+=a[i];
 
    if(mp.find(sum)!=mp.end() && s <= mp[sum] || sum==0){
 
        sum = a[i];
        s = i;
        sex++;
 
 
    }
 
    mp[sum] = i;
}
 
cout<<sex<<endl;
 
  }
 
 
 
 
 