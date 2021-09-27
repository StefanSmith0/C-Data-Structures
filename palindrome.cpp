#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char strin[80];
  char strout[80];
  cin.get(strin, 80);
  int count = 0;
  
  for(int i = 0; i < 80; i++) {
    if(strin[i] > 64 && strin[i] < 91) {
      strout[count] = strin[i];
    }
    else if(strin[i] > 96 && strin[i] < 123) {
      strout[count] = strin[i];
    }
    else if(strin[i] == 32) {
      count--;
    }
    count++;
  }
  cout << strout << endl;
  return 0;
}
