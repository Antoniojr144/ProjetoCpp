#include<iostream>

using std::cout;
using std::endl;
using std::cin;

int main ()

 {
  int x, y;

  cout << " Digite dois inteiros no intervalo de 1-20:";
  cin >> x >> y;

  for ( int i = 1; i<= y; i++) {

  for ( int j = 1; j<= x; j++)
  cout << '@';

  cout << endl;

  }

return 0;

  } 
