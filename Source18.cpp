#include <iostream>

//функция invers() принимает в качестве параметра целое число, заданное в caller
int invers(int x)
{
    int n = 0;
    while (x)
    {
        n = 10 * n + x % 10;//данная операция позволяет инвертировать число, оно делится на 10 с остатком, который впоследствии умножается на 10, и к нему прибавляется следующая цифра из заданного числа
        x /= 10;//"отсекаем" цифры от заданного числа
    } 

    return n;
}

int main(){
std::cout << "Enter a number: ";
int num;
std::cin >> num;
if (num == invers(num)) {//вызов функции invers() со значением x=num
    std::cout  << " This number is a palindrom" << std::endl;
}
else {
    std::cout << "This number is not a palindrom " << std::endl;
}
return 0;
}

