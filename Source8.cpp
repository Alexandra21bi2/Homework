#include <iostream>
#include <cmath>

double med1(double k, double l, double m) {
    return 0.5 * sqrt(2 * k * k + 2 * l * l  - m * m); // Рассчитываем длину медианы исходного труегольника
}
double med2(double k, double l, double m) {
    return 0.5 * sqrt(2 * k * k + 2 * m * m  - l * l);//Рассчитываем длину медианы исходного треугольника
}
double med3(double k, double l, double m) {
    return 0.5 * sqrt(2 * m * m + 2 * l * l - k *k );//Рассчитываем длину медианы исходного треугольника
}
double newmed1(double g, double s, double v) {
    return 0.5 * sqrt(2 * g * g + 2 * s * s - v * v); // Рассчитываем длину медианы нового треугольника
}
double newmed2(double g, double s, double v) {
    return 0.5 * sqrt(2 * g * g + 2 * v * v - s * s);//Рассчитываем длину медианы нового треугольника
}
double newmed3(double g, double s, double v) {
    return 0.5 * sqrt(2 * v * v + 2 * s * s - g * g);//Рассчитываем длину медианы нового треугольника
}
int main()
{
    int a, b, c; // Объявляем переменные 
    std::cout << "Enter a side a: "; // Просим пользователя ввести данные
    std::cin >> a; //получаем число и присваиваем его значение переменной 
    std::cout << "Enter a side b: ";//Просим пользователя ввести число
    std::cin >> b; //получаем число и присваиваем его значение переменной 
    std::cout << "Enter a side c: ";//Просим пользователя ввести число
    std::cin >> c; //получаем число и присваиваем его значение переменной 
   double m1 = med1(a, b, c); //вызываем функцию med1() со значениями k=a, l=b, m=c
   double m2 = med2(a, b, c);//вызываем функцию med2() со значениями k=a, l=b, m=c
   double m3 = med3(a, b, c);//вызываем функцию med3() со значениями k=a, l=b, m=c
   double nm1 = newmed1(m1, m2, m3); //вызываем функцию nm1() со значениями m1=g, m2=s, m3=v
   double nm2 = newmed2(m1, m2, m3);//вызываем функцию nm2() со значениями m1=g, m2=s, m3=v
   double nm3 = newmed3(m1, m2, m3);//вызываем функцию nm3() со значениями m1=g, m2=s, m3=v
    std::cout << "The length of a median 1: " << nm1 << std::endl;
    std::cout << "The length of a median 2: " << nm2 << std::endl;
    std::cout << "The length of a median 3: " << nm3 << std::endl;
}