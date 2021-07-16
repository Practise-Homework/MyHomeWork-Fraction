#include "Fraction.h"
#include <iostream>
#include <iomanip>
using namespace std;

/*
* ����������� ������� � ������������ 
*/

Fraction::Fraction()
{
 this->a = 0.00;
 this->b = 0.00;
}

Fraction::~Fraction()
{
  cout << "������ ������..." << endl;
}

void Fraction::seta(double x)
{
  this->a = x;
}

double Fraction::geta()
{
  return a;
}

void Fraction::setb(double y)
{
  this->b = y;
}

double Fraction::getb()
{
 return b;
}

/*
* ������� inline-������� � ���������, 
* ������� ������������ ������� �������������� �������� ��� �������
*
*
* �������� ������������ 
*/
inline double Fraction::Sum()
{
 return (geta() + getb());
}

/*
* �������� ���������
*/
inline double Fraction::Sub()
{
 return (geta() - getb());
}

/*
* �������� ���������
*/
inline double Fraction::Mult()
{
 return (geta() * getb());
}

/*
* �������� �������
*/
inline double Fraction::Mod()
{
 if ((geta() && getb()) == 0.00)
   cout << "[--ERR-- �� ���� ������ ������! --ERR--]" << endl;
 else
   return (geta() / getb());
}

void Fraction::Help()
{
	cout <<"������� ������� �����...\n"
		<< " ��� �������� ��� ���� ����������� ����.��������� ` + - / *`" << endl
		<< " ������ ������ ����� ��� ������� ����.��������: 1.0 + 1.0" << endl << endl;
}

/*
* ����������� ���� ������ ��� ����������� �������� ���������� � ����� �������
*/
void Fraction::Calculator(char operation)
{
  switch (operation)
  {
   case '+':
	cout << fixed << setprecision(2) << Sum() << endl;
     break;
   case '-':
    cout << fixed << setprecision(2) << Sub() << endl;
     break;
   case '*':
    cout << fixed << setprecision(2) << Mult() << endl;
     break;
   case '/':
     cout << fixed << setprecision(2) << Mod() << endl;
	 break;
   default:
		cout << "����������� �������������� ��������... " << endl
			 << "��������� ���� ��� ���!" << endl;
	break;
	}
}

/*
* ������������ ������, ������� �������� ���������������� ���� 
*/
void Fraction::Input() 
{
 double v,w;
 char s;
  cout << ">>";
  cin >> v >> s >> w;
   this->seta(v);
   this->setb(w);
   this->Calculator(s);
}

/*
* ��� ��� �������� �����
*/
//void Fraction::getPrint() 
//{
//	cout << this->a << endl;
//	cout << this->b << endl;
//
//}


