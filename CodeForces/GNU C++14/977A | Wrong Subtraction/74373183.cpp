#include <iostream>
using namespace std;
 
int main() {
 
 
int n,k;
cin>>n>>k;
 
 
/*int Count=0;
while(n!=0){
   n = n/10;
   Count++;
 
 
}
*/
 
 
for(int i = 0; i< k; i++){
 
    if(n%10!=0){
 
        n--;
 
 
 
    }
 
    else {
 
 
        n= n/10;
 
    }
 
 
 
 
}
 
cout<<n;
 
}