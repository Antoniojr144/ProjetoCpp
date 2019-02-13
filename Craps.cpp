#include <iostream>
#include <cstdlib>
#include <ctime>
using std::time;
using std::cout;
using std::endl;

  int rollDice (void);

  int main ()

  {
    enum Status {CONTINUE, WON, LOST};
    int sum, myPoint;
    Status gameStatus;

    srand ( time ( 0 ) );
    sum = rollDice ();
    
    switch ( sum ) {
      case 7:
      case 11:
         gameStatus = WON;
          break;
      case 2:
      case 3:
      case 12:
        gameStatus = LOST;
          break;
      default:
        gameStatus = CONTINUE;
          myPoint = sum;
          cout << " Ponto é " << myPoint << endl;
          break;

     }

   while ( gameStatus == CONTINUE ) {
      sum = rollDice ();
      if ( sum == myPoint)
         gameStatus = WON;

      else 
         if ( sum == 7)
            gameStatus = LOST;

     }

    if ( gameStatus == WON )
       cout << " Jogador ganha" << endl;
    else
       cout << " Jogador perde" << endl;

  return 0;

 }

 int rollDice ( void )

 {
   int die1, die2, workSum;

   die1 = 1 + rand () % 6;
   die2 = 1 + rand () % 6;
   workSum = die1 + die2;
   cout << " Jogador fez " << die1 << " + " <<die2 << " = " << workSum << endl;

   return workSum;

 }
