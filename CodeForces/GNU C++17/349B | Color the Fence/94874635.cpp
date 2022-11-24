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
 
 
 
 
 
int32_t main(){
 
 
anmol();
 
 
 
 
int n;
cin>>n;
 
 
int digit[10];
 
for(int i =0; i<9; i++){
 
  cin>>digit[i];
}
 
 
/*for(int i= 0; i<8; i++){
 
  cout<<digit[i]<<" ";
}
*/
int min_digit = INT_MAX;
 
for(int i =0; i<9; i++){
 
  min_digit = min(min_digit,digit[i]);
}
 
int d = (n/min_digit);
string ans ="";
 
int sex =8;
for(int i =0; i<d; i++){
 
    for(int j = sex; j>=0; j--){
 
 
       if((d-i-1)*min_digit <=n-digit[j]){
             
             ans+=(j+'1');
             n = n-digit[j];
             sex= j;
             break;
 
 
 
       }
 
 
 
    }
 
 
 
 
}
 
 
if(ans.length()==0){
  cout<<-1<<endl;
}
 
else cout<<ans<<endl;
 
 
 
 
}