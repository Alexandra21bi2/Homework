#include <iostream>
#include <cmath>

//функция square() принимает два целых числа в качестве параметров и возвращает число, равное площади прямоугольного треугольника
//значения параметров определяет функция main()
int square(int x, int y)
{
	return  (x * y) / 2;
}
//функция hypotenuse() принимает три целых числа в качестве параметров и возвращает число, равное величине гипотенузы
double hypotenuse(double z, double f)
{
	return sqrt(z*z + f*f);
}
int main()
{
	double a, b;
	std::cout << "Enter the value of the cathet a: "; //просим пользователя ввести число
	std::cin >> a; //получаем число и присваиваем его значение переменной 
	std::cout << "Enter the value of the cathet b: "; //просим пользователя ввести число
	std::cin >> b; //получаем число и присваиваем его значение переменной
	std::cout << "The square = " << square(a, b) << std::endl; //вызов функции square() со значениями x=a, y=b
	std::cout << "The hypotenuse = " << hypotenuse(a, b) << std::endl; //вызов функции hypotenuse() со значениями z=a, f=b
	return 0;
}