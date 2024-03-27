#include "functions.h"
#include "input_validation.h"
#include <iostream>
#include <string>

using namespace std;

int main() 
{
  string option = " ";
  string color = "\x1b[" + to_string(32) + ";1m";
  string reset = "\x1b[0m";

  do
  {
    showMenu();
    cout << "\nPlease pick an option: ";
    option = validateString(option);
    cout << reset;
    handleOption(option);
  } while(option != "e" && option != "E");
  cout << "\nHope this helped!" << endl;
  

  return 0;
}
