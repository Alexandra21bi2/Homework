#include <iostream>
//функция hours() позволяет вычислить количество часов с помощью деления введенного значения секунд на количество секунд в одном часе
int hours(int d) {
    return d / 3600;
}
//функция minutes() позволяет вычислить количество минут с помощью деления введенного значения секунд на количество секунд в одной минуте
int minutes(int c) {
    return c / 60;
}
int main()
{
    int hr, min, sec; // Объявляем переменные 
    std::cout << "Enter number of seconds: "; // Просим пользователя ввести данные
    std::cin >> sec; //получаем число и присваиваем его значение переменной 
    std::cout << hours(sec) << " hour(s) " << std::endl; //вызов функции hours() со значениями d=sec
    std::cout << minutes(sec) << " min(s) " << std::endl; //вызов функции minutes() со значениями c=sec
    return 0;
}
    