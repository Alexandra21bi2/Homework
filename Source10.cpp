#include <iostream>

int main()
{
    int a, b, c; // ќбъ€вл€ем переменные 
    std::cout << "Enter side a: "; // ѕросим пользовател€ ввести данные
    std::cin >> a; //получаем число и присваиваем его значение переменной 
    std::cout << "Enter side b: ";//ѕросим пользовател€ ввести число
    std::cin >> b; //получаем число и присваиваем его значение переменной 
    std::cout << "Enter side c: ";//ѕросим пользовател€ ввести число
    std::cin >> c; //получаем число и присваиваем его значение переменной 
    if (a == b || b == c || a == c)
        std::cout << "The triangle is isosceles";
    else
        std::cout << "The triangle is not isosceles";

    return 0;
}