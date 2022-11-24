#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
 
void anmol()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
int k,b,c;
int min1 = 2000000;
 
/*int vowels[26] = {0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0};
int maxVowels(string s, int k) {
    int max_vow = 0;
    for (auto i = 0, cur_vow = 0; i < s.size(); ++i) {
        cur_vow += vowels[s[i] - 'A'];
        if (i >= k)
            cur_vow -= vowels[s[i - k] - 'A'];
        max_vow = max(max_vow, cur_vow);
    }
    return max_vow;
}
 
/*bool check(int n){
   bool flag = false;
    int m = n;
 while(m!=1){
 
    
    if(m%2){
        flag = true;
        break;
    }
    m =  m/2;
 
 
 }
 
 
 return !flag;
 
 
 
}
 
*/
 
 
/*int lengthOfLongestSubstringTwoDistinct(string s) {
 int start = 0;
    int change = 0;
    int ans = 0;
    for(int i = 0; i < s.size(); ++i)
    {
        if(s[i] != s[change])
        {
            if(change != 0 && s[i] != s[change-1])
            {
                start = change;
            }
            change = i;
        }
        ans = max(ans, i - start + 1);
    }
    return ans;
}
 
*/
 
 
int lengthOfLongestSubstringTwoDistinct(string s) {
    const int size_s = s.size();
    unordered_map<char, int> cand;
    int idx_start = 0, long_len = 0;
    for (int i = 0; i < size_s; i++) {
        cand[s[i]]++;
        while (cand['L'] > k) {
            if (--cand[s[idx_start]] == 0) cand.erase(s[idx_start]);
            idx_start++;
        }
       // long_len = max(long_len, i - idx_start + 1);
        if(long_len<i-idx_start+1){
            long_len = i-idx_start+1;
 
              // if(cand['W']<min1){
                //min1 = cand['W'];
                b = idx_start;
                c = i;
            //}
        }
 
        else if(long_len == i-idx_start+1){
 
            if(cand['W']<min1){
                min1 = cand['W'];
                b = idx_start;
                c = i;
            }
 
 
 
        }
    }
    return long_len;
    }
 
 
 
 
 /*int maxVowels(string s, int k) {
        map<int, int> vow;
        vow['L'] = 1;//vow['e'] = 1;vow['i'] = 1;vow['o'] = 1;vow['u'] = 1;
        int ans = 0, cnt = 0;
        for(int i = 0; i < s.size(); ++i) {
            cnt += vow[s[i]];
            if(i >= k)
                cnt -= vow[s[i-k]];
            ans = max(ans, cnt);
        }
        return ans;
    }
 
*/
     int longestPalindromeSubseq(string s) {
 
        int n= s.length();
        
        string s2 = s;
        
         reverse(s.begin(),s.end());
        
        int dp[n+1][n+1];
        
        
        for(int i =0; i<=n; i++){
            
            
            
            for(int j =0; j<=n; j++){
                
                if(i== 0 || j==0){
                    
                    dp[i][j]=0;
                }
                
                else if(s[i-1]==s2[j-1]){
                    
                    dp[i][j] = dp[i-1][j-1]+1;
                    
                    
                }
                
                else dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
                
                
                
                
                
            }
        }
        
        
        
        
    return dp[n][n];    
        }
int32_t main(){
 
 
anmol();
 
int t;
cin>>t;
 
while(t--){
 
 int n;
 cin>>n;
 
 
 int a[3] = {3,5,7};
 
 /*if(n%3==0){
 
    cout<<n/3<<endl;
 }
 
 else if(n%5==0){
 
    cout<<n/5<endl;
 }
 
 else if(n%7==0){
 
    cout<<n/7<<endl;
 }
 */
bool flag = false;
for(int i =0; i<=n/3; i++){
 
  for(int j =0; j<=n/5; j++){
 
    for(int k =0; k<=n/7; k++ ){
 
           if(a[0]*i + a[1]*j + a[2]*k == n){
 
            cout<<i<<" "<<j<<" "<<k<<" "<<endl;
            flag =  true;
            break;
           }
 
 
    }
 
 
    if(flag){
        break;
    }
  }
 
if(flag){
    break;
}
 
}
 
 if(!flag){
 
    cout<<-1<<endl;
 }
 
 
 //if()
 
 
 /*int ans = n/15;
 int x = n%15;
 
 
 
 
 if(x%3==0){
 
    cout<<ans+x/3<<" "<<ans<<" "<<ans<<" "<<endl;
 }
 
else if(x%5==0){
 
     cout<<ans<<" "<<ans+ x/5<<" "<<ans<<" "<<endl;
}
 
else if(x%7==0){
 
      cout<<ans<<" "<<ans<<" "<<ans+x/7<<" "<<endl;
}
 
else if(x%8==0){
     
     
      cout<<ans+x/8<<" "<<ans+x/8<<" "<<ans<<" "<<endl;
}
     
 
 
else if(x%12==0){
 
     cout<<ans<<" "<<ans + x/12<<" "<<ans+x/12<<" "<<endl;
}
 
 
 
else if(x%10==0){
 cout<<ans+x/10<<" "<<ans<<" "<<ans+x/10<<" "<<endl;
}
 
else if(x%13==0){
 
    cout<<ans+2<<" "<<ans<<" "<<ans+1<<" "<<endl;
}
 
else if(x%11==0){
 
    cout<<ans+2<<" "<<ans+1<<" "<<ans<<endl;
}
 
 
//else if()
 
 
 
 
else cout<<-1<<endl;
*/
}
 
 
}