#include <bits\stdc++.h>
 
using namespace std;
 
using ll = long long;
 
const ll level = 2e10;
 
int main(){
 int t;
 cin >> t;
 while (t--){
  string line;
  cin >> line;
  ll pos = 0;
  set <ll> pre_ans;
  for (auto x : line){
   ll tmp = 0;
   if (x == 'N') tmp = -level;
   if (x == 'S') tmp = level;
   if (x == 'E') tmp = 1;
   if (x == 'W') tmp = -1;
   pre_ans.insert(2 * pos + tmp);
   pos += tmp;
  }
  cout << pre_ans.size() * 4 + line.size() << "\n";
 }
 return 0;
}