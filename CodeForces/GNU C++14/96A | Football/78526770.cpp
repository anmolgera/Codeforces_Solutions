#include <iostream>
using namespace std;
 
string s;
main(){cin>>s;
if (s.find("0000000")!=-1||s.find("1111111")!=-1)
cout<<"YES";
else cout<<"NO";
}