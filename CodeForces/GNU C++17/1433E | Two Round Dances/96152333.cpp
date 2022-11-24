// C++ program to find factorial of given number 
#include <iostream> 
using namespace std; 
#define int long long
 
// function to find factorial of given number 
unsigned int factorial(unsigned int n) 
{ 
  if (n == 0) 
    return 1; 
  return n * factorial(n - 1); 
} 
 
// Driver code 
int32_t main() 
{ 
  int n;
  cin>>n;
  int y = n/2;
  cout<<factorial(n-1)/y<<endl;
  return 0; 
} 
 
// This code is contributed by Shivi_Aggarwal 