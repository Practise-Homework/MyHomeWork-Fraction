#pragma once
class Fraction
{
private:
	double a;
	double b;
public:
  Fraction();
  ~Fraction();
 void seta(double x);
  double geta();
 void setb(double y);
  double getb();
   inline double Sum();
   inline double Sub();
   inline double Mult();
   inline double Mod();
 void Help();
 void Input();
 /*void getPrint();*/
  void Calculator(char operation);
};
