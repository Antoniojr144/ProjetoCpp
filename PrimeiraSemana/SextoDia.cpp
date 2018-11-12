#include<iostream>

using std::cout;
using std::endl;

	int main ()

  { 
	for(int x = 1; x <= 10; x++)


  {
	if(x==5)
	continue;
	break;
	
	cout << x << " ";
  }

  	cout << "\n Usou continue para pular a impressão do valor 5" << endl;

return 0;
  }
