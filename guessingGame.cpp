#include <iostream>

using namespace std;

int main()
{
  int input = 0;
  int randNumber = 25;
  int guesses = 0;
  bool playing = true;
  char yesNo = 'a';
  //Restarts here if player wants to keep playing.
  while(playing == true) {
    cout << "Welcome to Guessing Game!" << endl
	 << "Guess the number between 1 and 100." << endl;
    //Set random seed and random number to randNumber.
    srand(time(NULL));
    randNumber = rand() % 100 + 1;
    //Main guessing loop
    while(!(input == randNumber)) {
      cin >> input;
      guesses++;
      //Check if number is valid
      if(input < 1 || input > 100)
	{
	  cout << "Number is between 1 and 100. (inclusive)" << endl;
	}
      //if guess is less than randNumber...
      else if(input > randNumber) {
	cout << "Number is less than " << input << "." << endl;
      }
      //if guess is greater than randNumber...
      else if(input < randNumber) {
	cout << "Number is greater than " << input << "." << endl;
      }
    }
    cout << "You Win!" << endl;
    cout << "Guesses: " << guesses << endl;
    yesNo = 'a';
    //Ask if they want to restart, until valid response.
    while(yesNo != 'y' && yesNo != 'n') {
      cout << "Play again? (y/n)" << endl;
      cin >> yesNo;
      if(yesNo == 'n') {
	playing = false;
      }
    }
  }
  return 0;
}
