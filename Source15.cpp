#include <iostream>

int main()
{
	int a;
	std::cout << "Enter the number of the month: "; //просим пользователя ввести число
	std::cin >> a; //получаем число и присваиваем его значение переменной 
	if (1 <= a && a <= 12) {//задаем промежуток возможных значений а
		//описываем более детально условия для каждого времени года и месяца
		if (a==1 || a==2 || a == 12) {
			std::cout << "It is Winter" << std::endl;
			if (a == 1) {
				std::cout << "It is January";
			}
			if (a == 12) {
				std::cout << "It is Decemder";
			}
			if (a == 2) {
				std::cout << "It is February";
			}

		}
		else if (a == 3 || a == 4 || a == 5) {
			std::cout << "It is Spring" << std::endl;
			if (a == 3) {
				std::cout << "It is March";
			}
			else if (a == 4) {
				std::cout << "It is April";
			}
			else {
				std::cout << "It is May";
			}
		}

		else if (a == 6 || a == 7 || a == 8) {
			std::cout << "It is Summer" << std::endl;
			if (a == 6) {
				std::cout << "It is June";
			}
			else if (a == 7) {
				std::cout << "It is July";
			}
			else {
				std::cout << "It is August";
			}
		}
		else if (a == 9 || a == 10 || a == 11) {
			std::cout << "It is Autumn" << std::endl;
			if (a == 9) {
				std::cout << "It is September";
			}
			else if (a == 10) {
				std::cout << "It is October";
			}
			else {
				std::cout << "It is November";
			}
		}
	}
	else { //вывод программы, при условии, что введенный пользователем номер не соответствует ни одному месяцу в году
		
			std::cout << "Error";
		
		}
		
}

