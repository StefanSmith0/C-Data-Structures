#include <iostream>

using namespace std;

int main()
{
  int input = 0;
  int number = 25;
  cout << "Welcome to Guessing Game!" << endl
       << "Guess the number between 1 and 100." << endl;
  cin >> input;
  while(input > 100 || input < 1)
    {
      cout << "Number is between 1 and 100 (inclusive)" << endl;
      cin >> input;
    }
  cout << input;
  return 0;
}
