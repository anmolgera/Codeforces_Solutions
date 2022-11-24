#include<bits/stdc++.h>
using namespace std;
 
int t[1005*1005];
 
int main() {
 int n;
 scanf("%d", &n);
 for(int i = 1; i <= n; ++i) {
  scanf("%d", &t[i]);
  while(t[i] % 2 == 0) t[i] /= 2;
  while(t[i] % 3 == 0) t[i] /= 3;
 }
 for(int i = 2; i <= n; ++i)
  if(t[i] != t[1]) {
   puts("No");
   return 0;
  }
 puts("Yes");
 return 0;
}