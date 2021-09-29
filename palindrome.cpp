#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char strin[80];
  char strout[80];
  char strback[80];
  cin.get(strin, 80);
  int count = 0;
  int countcon = 0;
  
  for(int i = 0; i < 80; i++) {
    strout[count] = 0;
    
    if(strin[i] > 64 && strin[i] < 91) {
      strout[count] = strin[i];
      strout[count] += 32;
    }
    else if(strin[i] > 96 && strin[i] < 123) {
      strout[count] = strin[i];
    }
    else {
      count--;
    }
    count++;
  }
  cout << strout << endl;
  countcon = count;
  for(int i = 0; i < countcon; i++) {
    strback[i] = strout[count];
    count--;
  }
  strback[countcon + 1] = 0;
  cout << strback << endl;
  
  if(strcmp(strout, strback) == 0) {
    cout << "Palindrome" << endl;
  }
  else {
    cout << "Not a palindrome" << endl;
  }
  
  cout << strback << " Count: " << count << endl;
  return 0;
}
