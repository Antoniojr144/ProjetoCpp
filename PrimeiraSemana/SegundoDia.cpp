#include<iostream>

using std::cout;
using std::endl;

  int main ()
  {
      int sum = 0;

      for ( int number = 2; number <= 100; number +=2)
          sum += number;
      cout<< "A soma é " << sum << endl;
      
      return 0;

  }
