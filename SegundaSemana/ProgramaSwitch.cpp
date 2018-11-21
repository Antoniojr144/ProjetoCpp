#include<iostream>
using std::cout;
using std::cin;
using std::endl;

  int main ()

  {
    int grade,aCount = 0, bCount = 0, cCount = 0, dCount = 0, fCount = 0,
        <ctrl-d>;

    cout << " Forneça as notas representadas por letras. " << endl
    << " Digite o caractere <ctrl-d> para terminar a entrada de dados." << endl; 
    while ( ( grade = cin.get () ) != <ctrl-d> ) {
    
    switch ( grade) {
    case 'A':
    case 'a':
    ++aCount;
    break;

    case 'B':
    case 'b':
    ++bCount;
    break;
  
   case 'C':
   case 'c':
   ++cCount;
   break;

   case 'D':
   case 'd':
   ++dCount;

   case 'F':
   case 'f':
   ++fCount;
   break;

   case '\n':
   case '\t':
   case ' ':
   break;

   default:

   cout << "Forneça nota representada por letra incorreta."
   << " Digite uma nova nota."<< endl;

   break;
 
    }

  }

    cout << " \n\n Os totais para cada nota representada por letra são :"
         << "\nA :" << aCount
         << "\nB :" << bCount
         << "\nC :" << cCount
         << "\nD :" << dCount
         << "\nF :" << fCount<< endl;

  return 0;
  }
