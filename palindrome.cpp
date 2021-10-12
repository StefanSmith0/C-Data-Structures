#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char strin[80];
  char strout[80];
  char strback[80];
  int count = 0;
  int countcon = 0;

  //Get input
  cin.get(strin, 80);
  //Copy input to strout
  for(int i = 0; i < strlen(strin) + 1; i++) {
    strout[count] = 0;
    //Set all uppercase chars to lowercase
    if(strin[i] > 64 && strin[i] < 91) {
      strout[count] = strin[i];
      strout[count] += 32;
    }
    else if(strin[i] > 96 && strin[i] < 123) {
      strout[count] = strin[i];
    }
    //Cut out all non-letter characters
    else {
      count--;
    }
    count++;
  }
  cout << strout << endl;
  //Make room for terminating character
  countcon = count;
  count--;
  //Iterate backwards through strout, copy to strback
  for(int i = 0; i < countcon; i++) {
    strback[i] = strout[count];
    count--;
  }
  //Set the terminating character at the end of strback
  strback[countcon] = 0;
  cout << strback << endl;
  //Check if strout = strback, return answer
  if(strcmp(strout, strback) == 0) {
    cout << ">> Palindrome <<" << endl;
  }
  else {
    cout << ">> Not a palindrome <<" << endl;
  }
  return 0;
}
