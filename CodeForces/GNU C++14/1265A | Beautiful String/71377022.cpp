#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t,l=0;
 cin>>t;
 string s;
 for(int i=0;i<t;i++){
 cin>>s;
 l=0;
 for(int j=0;j<s.length();j++){
  if(s[j]!='?'){
  if(s[j]==s[j+1]){
  l++;
        }
  }
  else
  {for(char c='a';c<='c';c++)
   if((s[j-1]!=c)&&(s[j+1]!=c))
   s[j]=c;
  }}
  if(l==0)
 cout<<s<<"\n";
 else
 cout<<-1<<"\n";
}
return 0;
}