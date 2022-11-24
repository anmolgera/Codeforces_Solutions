#include <iostream>
 
int t, n;
std::string a, b, c;
 
int main()
{
 std::cin >> t;
 while (t--)
 {
  std::cin >> n >> a >> b >> c;
  int i = 0, j = 0, k = 0, m = 0;
  while (i != 2 * n && j != 2 * n && k != 2 * n)
  {
   int x = (int)(a[i] == '0') + (b[j] == '0') + (c[k] == '0');
   char y = x >= 2 ? '0' : '1'; std::cout << y;
   i += a[i] == y; j += b[j] == y; k += c[k] == y; ++m;
  }
  m -= n;
  if      (i != 2 * n && i >= m) std::cout << a.substr(i) << '\n';
  else if (j != 2 * n && j >= m) std::cout << b.substr(j) << '\n';
  else if (k != 2 * n && k >= m) std::cout << c.substr(k) << '\n';
  else std::cout << '\n';
 }
}
 