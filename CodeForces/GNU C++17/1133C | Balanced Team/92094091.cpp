#include <bits/stdc++.h>
using namespace std;
 
int main(){
int n;
cin>>n;
long a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
sort(a,a+n);
int c=1,bs=1,id=0;
for(int i=1;i<n;)
{
    if(a[i]-a[id]<=5){
        c++;
       i++;
    }
    else
    {
        id++;
        c--;
    }
    if(c>bs)
        bs=c;
}
cout<<bs;
return 0;
}