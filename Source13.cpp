#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//функция mult() принимает в качестве параметров два целых числа, рандомно созданных в caller
int mult(int d, int f) {
    return d * f;
}
int main()
{
    int a, b, c;
    std::cout << "Enter a number: ";//просим пользователя ввести число
    std::cin >> c;//получаем число и присваиваем его значение переменной 
    //генерируем орандомные числа в диапазоне от 1 до 10
    a = rand() % 10 +1;
    b = rand() % 10 +1;
    if (c == mult(a, b)) {//вызов функции mult() со значениями d=a, f=b
        std::cout << "You are right";
    }
    else {
     std::cout << "You are wrong";
    }
}