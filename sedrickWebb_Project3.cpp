//Tic Tac Toe
//Player plays tic tac toe with the computer.
//Version (v5ish)

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void load_Gameboard();
void place_Marker(int place);
void computer();
int checkWin();
void reset();

bool whos_turn = true; // true = player 1 false = computer
char game_board[2][6] = {{'o','1','2','3','4','5'},
                         {'6','7','8','9','-','|'}};
int game_state = 4; //1 = player 1 won. 2 = player 2 won. 3 = tie game. 4 = in progress.
int what_choice;
char yes_or_no;
char play_again;

int main()
{
 cout << "   Tic Tac Toe" << endl;
 cout << endl;
 cout << "Would you like to play? Y/N\n";
 cin >> yes_or_no;
  
   do
   {
    if (yes_or_no == 'y' || yes_or_no == 'Y')
    {
      
     if (game_state == 4)
     {
      
      do
      {
       system("CLS");
       cout << "Cool Lets Start!\n\n";
       load_Gameboard();
       
       cout << "It is ";
       if (whos_turn == true)
       {
        cout << "your turn.\n\n";
        cout << "Where would you like to place your marker?\n";
        cin >> what_choice;
       }
       else if (whos_turn == false)
       {
        cout << "the computer turn\n\n";
        computer();
        cout << " The computer chose " << what_choice;
        cout << "\nPress enter to continue.\n";
       }
       place_Marker(what_choice);
       
       //whos_turn = !whos_turn;
       game_state = checkWin();
       
      } while (game_state == 4);
     }


     if (game_state == 1)
     {
      cout << "You won!!\n" << "Would you like to play again?\n";
      cin >> play_again;
      if (play_again == 'y' || play_again == 'Y')
      {
       reset();
      }
      else
      {
       return 0;
      }
     }


     if (game_state == 2)
     {
      cout << "You lost?? Better luck next time.\n" << "Would you like to play again?\n";
      cin >> play_again;
      if (play_again == 'y' || play_again == 'Y')
      {
       reset();
      }
      else
      {
       return 0;
      }
      system("PAUSE");
     }
     

     if (game_state == 3)
     {
      cout <<"Tie game. At least you didnt lose.\n" << "Would you like to play again?\n";
      cin >> play_again;
      
      if (play_again == 'y' || play_again == 'Y')
      {
       reset();
      }
      else
      {
       return 0;
      }

     }

    }
    else if (yes_or_no == 'n' || yes_or_no == 'N')
    {
     cout << "We will wait...\n" << "How about now? Y/N\n";
     cin >> yes_or_no;
    }
    else if (yes_or_no != 'y' || yes_or_no != 'Y' || yes_or_no != 'n' || yes_or_no != 'N')
    {
     cout << " Wrong key.\n" << "Try again. Y/N\n";
     cin >> yes_or_no;
    }
   } while (yes_or_no != 'y' || yes_or_no != 'Y');
 system("PAUSE");
}
 void load_Gameboard()
 {
   cout << "Tic Tac Toe" << endl;
   cout << "   " << game_board[0][1] << game_board[1][5] << game_board[0][2] << game_board[1][5] << game_board[0][3] << endl;
   cout << "   " << game_board[1][4] << game_board[1][4] << game_board[1][4] << game_board[1][4] << game_board[1][4] << endl;
   cout << "   " << game_board[0][4] << game_board[1][5] << game_board[0][5] << game_board[1][5] << game_board[1][0] << endl;
   cout << "   " << game_board[1][4] << game_board[1][4] << game_board[1][4] << game_board[1][4] << game_board[1][4] << endl;
   cout << "   " << game_board[1][1] << game_board[1][5] << game_board[1][2] << game_board[1][5] << game_board[1][3] << endl;
 }
void place_Marker(int place)
{
 char mark;
 if (whos_turn == true)
  {
   mark = { 'X' };
  }
  else
  {
    mark = { 'O' };
  }
 
  if (place == 1 && game_board[0][1] == '1') //placing mark logic
  {
   game_board[0][1] = mark;
  }
  else if (place == 2 && game_board[0][2] == '2') //placing mark logic
  {
   game_board[0][2] = mark;
  }
  else if (place == 3 && game_board[0][3] == '3') //placing mark logic
  {
   game_board[0][3] = mark;
  }
  else if (place == 4 && game_board[0][4] == '4') //placing mark logic
  {
   game_board[0][4] = mark;
  }
  else if (place == 5 && game_board[0][5] == '5') //placing mark logic
  {
   game_board[0][5] = mark;
  }
  else if (place == 6 && game_board[1][0] == '6') //placing mark logic
  {
   game_board[1][0] = mark;
  }
  else if (place == 7 && game_board[1][1] == '7') //placing mark logic
  {
   game_board[1][1] = mark;
  }
  else if (place == 8 && game_board[1][2] == '8') //placing mark logic
  {
   game_board[1][2] = mark;
  }
  else if (place == 9 && game_board[1][3] == '9') //placing mark logic
  {
   game_board[1][3] = mark;
  }
  else
  {
  cout << "That space is already used or is invalid. Try again.\n";
  
  if (whos_turn == true)
  {
   cin >> (place);
   //place_Marker(place);
  }
  if (whos_turn == false)
  {
   computer();
   //place_Marker(what_choice);
  }
  whos_turn = !whos_turn;
  
  
  }
  //cin.get();
  whos_turn = !whos_turn;
 
 
}
void computer() //computers choses the mark
{
 srand((unsigned)time(0));  //helper code for the random num gen
 what_choice = rand() % 9 + 1; // gives a (closer to)true random number between 1-9
}
int checkWin() // checks to see if anyone has got 3 in a row
{
 
 if (game_board[0][1] == game_board[0][2] && game_board[0][2] == game_board[0][3] && game_board[0][1] != '1' )
 {
  if (whos_turn == false)
  {
   return 1;
  }
  else
  {
   return 2;
  }
 }
 else if (game_board[0][4] == game_board[0][5] && game_board[0][5] == game_board[1][0] && game_board[0][4] != '4')
 {
  if (whos_turn == false)
  {
   return 1;
  }
  else
  {
   return 2;
  }
 }
 else if (game_board[1][1] == game_board[1][1] && game_board[1][1] == game_board[1][2] && game_board[0][1] != '1')
 {
  if (whos_turn == false)
  {
   return 1;
  }
  else
  {
   return 2;
  }
 }
 else if (game_board[0][1] == game_board[0][4] && game_board[0][4] == game_board[1][1] && game_board[0][1] != '1')
 {
  if (whos_turn == false)
  {
   return 1;
  }
  else
  {
   return 2;
  }
 }
 else if (game_board[0][2] == game_board[0][5] && game_board[0][5] == game_board[1][3] && game_board[0][2] != '2')
 {
  if (whos_turn == false)
  {
   return 1;
  }
  else
  {
   return 2;
  }
 }
 else if (game_board[0][3] == game_board[1][0] && game_board[1][0] == game_board[1][3] && game_board[0][3] != '3')
 {
  if (whos_turn == false)
  {
   return 1;
  }
  else
  {
  return 2;
  }
 }
 else if (game_board[0][1] == game_board[0][5] && game_board[0][5] == game_board[1][3] && game_board[0][1] != '1')
 {
  if (whos_turn == false)
  {
   return 1;
  }
  else
  {
   return 2;
  }
 }
 else if (game_board[0][3] == game_board[0][5] && game_board[0][5] == game_board[1][1]  && game_board[0][3] != '3')
 {
  if (whos_turn == false)
  {
   return 1;
  }
  else
  {
   return 2;
  }
 }
 else if (game_board[0][1] != '1' && game_board[0][2] != '2' && game_board[0][3] != '3' && game_board[0][4] != '4' && game_board[0][5] != '5' && game_board[1][0] != '6' && game_board[1][1] != '7' && game_board[1][2] != '8' && game_board[1][3] != '9')
 {
  return 3;
 }
 else
 {
  return 4;
 }
 
}
void reset() //resets the game board
{
  game_board[0][1] = '1';
  game_board[0][2] = '2';
  game_board[0][3] = '3';
  game_board[0][4] = '4';
  game_board[0][5] = '5';
  game_board[1][0] = '6';
  game_board[1][1] = '7';
  game_board[1][2] = '8';
  game_board[1][2] = '9';
  whos_turn = true;
  game_state = 4;
}