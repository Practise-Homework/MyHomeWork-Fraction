#include "Fraction.h"
#include <iostream>
#include <iomanip>
using namespace std;

/*
* Определение сеттера и конструктора 
*/

Fraction::Fraction()
{
 this->a = 0.00;
 this->b = 0.00;
}

Fraction::~Fraction()
{
  cout << "Объект удален..." << endl;
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
* Перечни inline-функций с геттерами, 
* которые обеспечивают базовые арифметические действия над дробями
*
*
* Операции суммирования 
*/
inline double Fraction::Sum()
{
 return (geta() + getb());
}

/*
* Операции вычитания
*/
inline double Fraction::Sub()
{
 return (geta() - getb());
}

/*
* Операции умножения
*/
inline double Fraction::Mult()
{
 return (geta() * getb());
}

/*
* Операции деления
*/
inline double Fraction::Mod()
{
 if ((geta() && getb()) == 0.00)
   cout << "[--ERR-- На ноль делить нельзя! --ERR--]" << endl;
 else
   return (geta() / getb());
}

void Fraction::Help()
{
	cout <<"Введите дробные числа...\n"
		<< " Для операций над ними используйте арфм.операторы ` + - / *`" << endl
		<< " Формат строки ввода для обычных арфм.действий: 1.0 + 1.0" << endl << endl;
}

/*
* Определение тела метода для калькуляции значений хранящихся в полях объекта
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
		cout << "Неизвестная арифметическая операция... " << endl
			 << "Повторите ввод ещё раз!" << endl;
	break;
	}
}

/*
* Определдение метода, который содержит пользовательский ввод 
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
* Это был тестовый метод
*/
//void Fraction::getPrint() 
//{
//	cout << this->a << endl;
//	cout << this->b << endl;
//
//}


