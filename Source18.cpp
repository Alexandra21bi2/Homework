#include <iostream>

//������� invers() ��������� � �������� ��������� ����� �����, �������� � caller
int invers(int x)
{
    int n = 0;
    while (x)
    {
        n = 10 * n + x % 10;//������ �������� ��������� ������������� �����, ��� ������� �� 10 � ��������, ������� ������������ ���������� �� 10, � � ���� ������������ ��������� ����� �� ��������� �����
        x /= 10;//"��������" ����� �� ��������� �����
    } 

    return n;
}

int main(){
std::cout << "Enter a number: ";
int num;
std::cin >> num;
if (num == invers(num)) {//����� ������� invers() �� ��������� x=num
    std::cout  << " This number is a palindrom" << std::endl;
}
else {
    std::cout << "This number is not a palindrom " << std::endl;
}
return 0;
}

