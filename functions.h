#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <string>
#include "Input_Validation_Extended.h"
using namespace std;

void showMenu();
void handleOption(string); 
void showMotionMenu();


void showMenu()
{
  cout << "\nWhat would you like to calculate?" << endl;
  cout << "A: Calculate Motion" << endl;
  cout << "B: Calculate Acceleration" << endl;
  cout << "C: Calculate Velocity" << endl;
  cout << "D: Calculate Force" << endl;
  cout << "E: Calculate Weight on Earth" << endl;
  cout << "F: Calculate Momentum" << endl;
  cout << "X: Exit" << endl;
}

void handleOption(string userOption)
{
  if(userOption == "A" || userOption == "a")
  {
    char choice = '\0';
    double v = 0.0, a = 0.0, t = 0.0, s = 0.0, v0 = 0.0, s0 = 0.0;
    
    showMotionMenu();
    choice = validateChar(choice);

    if(choice == 'A' || choice == 'a')
    {
      cout << "Enter v0: ";
      v0 = validateDouble(v0);
      cout << "Enter a: ";
      a = validateDouble(a);
      cout << "Enter t: ";
      t = validateDouble(t);

      cout << "v = " << v0 + (a * t) << endl;
    }
    else if(choice == 'B' || choice == 'b')
    {
      cout << "Enter s0: ";
      s = validateDouble(s0);
      cout << "Enter v0: ";
      v0 = validateDouble(v0);
      cout << "Enter t: ";
      t = validateDouble(t);
      cout << "Enter a: ";
      a = validateDouble(a);
      cout << "s = " << s0 + (v0 * t) + (0.5 * (a * t * t)) << endl;
    }
    else if(choice == 'C' || choice == 'c')
    {
      cout << "Enter v0: ";
      v0 = validateDouble(v0);
      cout << "Enter a: ";
      a = validateDouble(a);
      cout << "Enter s: ";
      s = validateDouble(s);
      cout << "Enter s0: ";
      s0 = validateDouble(s0);
      cout << "v = " << (v0 * v0) + (2 * a * (s - s0)) << endl;
    }
    else if(choice == 'D' || choice == 'd')
    {
      cout << "Enter v: ";
      v = validateDouble(v);
      cout << "Enter v0: ";
      v0 = validateDouble(v0);
      cout << "v = " << 0.5 * (v + v0) << endl;
    }
    else
    {
      cout << "\nThat's not an option, try again please." << endl;
    }
  }
  else if(userOption == "B" || userOption == "b")
  {
    double dv = 0.0, dt = 0.0;

    cout << "Enter dv: ";
    dv = validateDouble(dv);
    cout << "Enter dt: ";
    dt = validateDouble(dt);
    cout << "a = " << dv / dt << endl;
  }
  else if(userOption == "C" || userOption == "c")
  {
    double ds = 0.0, dt = 0.0;
    
    cout << "Enter ds: ";
    ds = validateDouble(ds);
    cout << "Enter dt: ";
    dt = validateDouble(dt);
    cout << "v = " << ds / dt << endl;
  }
  else if(userOption == "D" || userOption == "d")
  {
    double m = 0.0, a = 0.0;
    string mass = "", acceleration = "";
    
    cout << "Enter mass: ";
    m = validateDouble(m);
    cout << "What is the unit? ";
    mass = validateString(mass);
    
    cout << "Enter accelaration: ";
    a = validateDouble(a);
    cout << "What is the unit? ";
    acceleration = validateString(acceleration);

    cout << "F = " << m * a << mass << " " << acceleration << endl;
    
  }
  else if(userOption == "E" || userOption == "e")
  {
    double mass = 0.0;
    string massUnit = "";

    cout << "Enter mass: ";
    mass = validateDouble(mass);
    cout << "What is the unit? ";
    massUnit = validateString(massUnit);

    cout << "Weight on Earth = " << mass * 9.8 << massUnit << endl;
  }
  else if(userOption == "F" || userOption == "f")
  {
    double m = 0.0, v = 0.0;
    string massUnit = "", velocityUnit = "";

    cout << "Enter m: ";
    m = validateDouble(m);
    cout << "What is the unit?";
    massUnit = validateString(massUnit);
    cout << "Enter v: ";
    v = validateDouble(v);
    cout << "What is the unit?";
    velocityUnit = validateString(velocityUnit);

    cout << "Momentum = " << m * v << " " << massUnit << " " << velocityUnit << endl;
  }
  else if(userOption == "X" || userOption == "x")
  {
    cout << " ";
  }
  else
  {
    cout << "\nThat's not an option, try again please." << endl;
  }
}


void showMotionMenu()
{
  cout << "\nWhich motion formula are we using? " << endl;
  cout << "A: v = v0 + at" << endl;
  cout << "B: s = s0 + v0t + ½at²" << endl;
  cout << "C: v² = v0² + 2a(s - s0)" << endl;
  cout << "D: v = ½(v + v0)" << endl;
}

#endif