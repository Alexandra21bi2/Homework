#include <iostream>

//функция weight() принимает одно целое в качестве параметрф и возвращает число, равное иеальному весу человека с заданным ростом
//значения параметров определяет функция main()
int weight(int x)
{
	return  x-100;
}
int main()
{
	int h, w;
	std::cout << "Enter the height: "; //просим пользователя ввести рост
	std::cin >> h; //получаем число и присваиваем его значение переменной 
	std::cout << "Enter the weight: "; //просим пользователя ввести вес
	std::cin >> w; //получаем число и присваиваем его значение переменной 
	//задаем условия для совета
	if (w > weight(h)) {//вызов функции weight() со значениями x=h
		std::cout << "You need to lose weight" << std::endl; 
	}
	if (w < weight(h)) {
		std::cout << "You need to gain weight" << std::endl;
	}
	if (w == weight(h)) {
		std::cout << "You have an ideal weight" << std::endl;
	}
	return 0;
}