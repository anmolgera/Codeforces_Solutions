#include<iostream>
using namespace std;
char x,c;string s="qwertyuiopasdfghjkl;zxcvbnm,./";
int main()
{cin>>x;
while(cin>>c){cout<<s[s.find(c)-(x=='R')+(x=='L')];}
}