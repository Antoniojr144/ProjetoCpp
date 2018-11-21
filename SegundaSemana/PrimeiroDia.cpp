#include<iostream>

using std::cout;
using std::endl;

int main ()

 {
  int y, x = 1, total = 0;

  while ( x<= 10) {
  
  y = x*x;

  cout<< y << endl;
  total += y;
  ++x;

 }

 cout<< " O total é " << total<< endl;

return 0;
 }

