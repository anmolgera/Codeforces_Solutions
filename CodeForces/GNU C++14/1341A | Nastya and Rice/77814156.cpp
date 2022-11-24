#include<bits/stdc++.h>
using namespace std;
 
 
 
 
 
 
 
 
int main(){
 
int n;
cin>>n;
while(n--){
 
int a,b,c,d,e;
cin>>e>>a>>b>>c>>d;
 
if( b>= a || c <= d || (a<=0||b<0||c<=0 || d<0)){
    cout<<"No"<<endl;
}
 
/*else if(((c-d <=e*(a-b) )&&(e*(a-b) <=c+d)) || ((c-d <=e*(a+b)) && (e*(a+b) <=(c+d)))){
 
    cout<<"Yes"<<endl;
}
//cout<<e*(a+b);
*/
 
 
else if(e*(a+b)<(c-d) || e*(a-b) > c+d) cout<<"No"<<endl;
 
   else  cout<<"Yes"<<endl;
 
 
//cout<<e*(a+b);
}
 
 
 
 
 
 
 
 
 
}