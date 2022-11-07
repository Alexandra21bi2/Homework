#include <iostream>

//функция square() принимает три целых числа в качестве параметров и возвращает число, равное площади трапеции с заданными величинами
//значения параметров определяет функция main()
int square(int x, int y, int z)
{
	return  (z*(x + y)) / 2;
}
int main()
{
	std::cout << "Enter the value of the base 1: "; //просим пользователя ввести число
	int b1 = 0; 
	std::cin >> b1; //получаем число и присваиваем его значение переменной 
	std::cout << "Enter the value of the base 2: "; //просим пользователя ввести число
	int b2 = 0;
	std::cin >> b2; //получаем число и присваиваем его значение переменной
	std::cout << "Enter the height value: "; //просим пользователя ввести число
	int h = 0;
	std::cin >> h; //получаем число и присваиваем его значение переменной
	std::cout << "The square = " << square(b1, b2, h) << std::endl; //вызов функции square() со значениями x=b1, y=b2, h=z
	return 0;
}