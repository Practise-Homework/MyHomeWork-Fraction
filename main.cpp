#include <iostream>
#include "Fraction.h"
using namespace std;

int main()
{
setlocale(LC_ALL, "ru");
 Fraction f;
  f.Help();
 while (true)
 { 
  f.Input();
 }
}