#include<iostream>

using std::cout;
using std::endl;
using std::cin;

  int main ()
  
  { 
    int i, j, k;

    cout<<  " Digite três valores " << endl;
    cin >> i;
    cin >> j;
    cin >> k;

    for (i = 1; i <= 5; i++) {
       for ( j = 1; j <=3; j++) {
          for (k = 1; k <= 4; k++)

          cout<< '*';

   }
          cout << endl;

  } 

return 0;

}
