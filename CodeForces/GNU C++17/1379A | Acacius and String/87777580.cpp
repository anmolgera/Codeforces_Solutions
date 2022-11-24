#include<bits/stdc++.h>
using namespace std;
 
#define watch(x) cout << (#x) << " = " << (x) << endl
#define PI double(2 * acos(0.0))
#define LL long long
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()
#define INF 1e15
int check(string s) {
 int n = s.length();
 int abc = 0;
 for(int i = 3; i < (n-3); i++) {
  int count = 0;
  if(s[i] == 'c') {
   if(s[i-3] == 'a') {
    count++;
   }
   if(s[i-2] == 'b' ) {
    count++;
   }
   if(s[i-1] == 'a') {
    count++;
   }
   if(s[i+1] == 'a') {
    count++;
   }
   if(s[i+2] == 'b') {
    count++;
   }
   if(s[i+3] == 'a') {
    count++;
   }
  } 
  if(count == 6) {
   abc++;
  }
 }
 return abc;
}
int place(string &s, int i) {
 int abc = 0;
 int count = 0;
 if(s[i] == 'c' || s[i] == '?') {
  if(s[i-3] == 'a' || s[i-3] == '?') {
   count++;
  }
  if(s[i-2] == 'b' || s[i-2] == '?') {
   count++;
  }
  if(s[i-1] == 'a' || s[i-1] == '?') {
   count++;
  }
  if(s[i+1] == 'a' || s[i+1] == '?') {
   count++;
  }
  if(s[i+2] == 'b' || s[i+2] == '?') {
   count++;
  }
  if(s[i+3] == 'a' || s[i+3] == '?') {
   count++;
  }
 } 
 if(count == 6) {
  s[i-3] = 'a';
  s[i-2] = 'b';
  s[i-1] = 'a';
  s[i] = 'c';
  s[i+1] = 'a';
  s[i+2] = 'b';
  s[i+3] = 'a';
  return 1;
 } else {
  return 0;
 }
}
void rest(string &s) {
 for(int i = 0; i < (int)s.length(); i++) {
  if(s[i] == '?') {
   s[i] = 'z';
  }
 }
 return;
}
int main()  {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
     int n;
     cin >> n;
   string s;
     cin >> s;
     
     int flag = 0;
     for(int i = 3; i < (n-3); i++) {
      // cout << i << " ";
      string temp = s;
      // cout << temp << " ";
      if(place(temp, i)) {
       rest(temp);
       // cout << i << " ";
       // cout << temp << " ";
      }
      int abc = check(temp);
      rest(temp);
      if(abc == 1) {
       cout << "Yes\n";
       cout << temp << "\n";
       flag = 1;
       break;
      }
     }
     if(flag == 0) {
      cout << "No\n";
     }
    }
    return 0;
}
 