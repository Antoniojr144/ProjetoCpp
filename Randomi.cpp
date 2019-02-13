#include <iostream>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>

using std::setw;

#include <cstdlib>

  int main ()

 {

    unsigned seed;

  //  cout << " Forneça a semente: ";
  //  cin >> seed;
  //  srand (seed);
    srand( time ( 0 ) );
    for ( int i = 1; i <= 10; i++) {
     cout << setw (4) << 1 + rand () % 6;
     if (i % 2 == 0)
        cout << endl;
    }

 return 0;

 }
