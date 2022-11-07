#include <iostream>
const double PI = 3.14;
//функция length() принимает одно целое число и одну константу в качестве параметров и возвращает число, равное длине окружности
//значения параметра определяет функция main()
double length(int x)
{
	return  2 * PI * x;
}
//функция square() принимает одно целое число и одну константу в качестве параметров и возвращает число, равное площади круга
//значения параметра определяет функция main()
double square(int y)
{
	return  PI * (y * y);
}
int main()
{

	std::cout << "Enter the value of radius: "; //просим пользователя ввести число
	int r = 0;
	std::cin >> r; //получаем число и присваиваем его значение переменной 
	std::cout << "The length  = " << length(r) << std::endl; //вызов функцииlength() со значениями x=r
	std::cout << "The square = " << square(r) << std::endl; //вызов функции square() со значениями y=r
	return 0;
}