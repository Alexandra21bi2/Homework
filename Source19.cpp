#include <iostream>
int multiply(int z, int m) {
    int a, b, c;
    a = z / 100;
    b = z % 10;
    c = z % 100 / 10;
    m = a * b * c;
    return m;
}
int summary(int y, int s) {
    while (y > 0)
    {
        s += y % 10;//записываем остаток от деления в сумму
        y /= 10;//отделяем записанную в сумму цифру от всего числа
    }
    s += y;
    return s;
}
int main()
{
    int n, Sum, b, Mult; //создаются переменные 
    std::cout << "Enter a three-digit number: "; //просим пользователя ввести число
    std::cin >> n; //получаем число и присваиваем его значение переменной 
    Sum = 0;
    Mult = 0;
    std::cout << "Enter a random number: "; //просим пользователя ввести число
    std::cin >> b;
    if (b < multiply(n, Mult)) {//вызов функции multiply() со значениями z=n, m=Mult
        std::cout << "The multiply is more than b" << std::endl;//выводим результат 
    }
    else {
        std::cout << "The multiply is less than b" << std::endl;
    }
    if (summary(n, Sum) % 7 == 0) {//вызов функции summary() со значениями y=n, s=Sum
        std::cout << "The summary is a multiple of 7" << std::endl;//выводим результат 
    }
    else {
        std::cout << "The summary is not a multiple of 7" << std::endl;
    }


}
