#include "functions.h"
#include <iostream>
#include <string>

using namespace std;

int main() 
{
  string option = " ";
  
  do
  {
    showMenu();
    cout << "\nPlease pick an option: ";
    option = validateString(option);
    handleOption(option);
    
  } while(option != "x" && option != "X");
  
  cout << "\nHope this helped!" << endl;
  
  return 0;
}
