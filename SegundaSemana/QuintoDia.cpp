#include<iostream>

using std::cout;
using std::cin;
using std::endl;

   int main ()

  {
    int x, y, i, power;

    i=1;
    power = 1;

    cout << "Digite o valor inteiro da base: ";
    cin >> x;

    cout<< " Digite o valor inteiro do expoente: ";
    cin >> y;

    while (i<= y) {
    power *= x;
    ++i;
  }

   cout<< power<< endl;

   return 0;
}

