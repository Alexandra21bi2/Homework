#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//������� mult() ��������� � �������� ���������� ��� ����� �����, �������� ��������� � caller
int mult(int d, int f) {
    return d * f;
}
int main()
{
    int a, b, c;
    std::cout << "Enter a number: ";//������ ������������ ������ �����
    std::cin >> c;//�������� ����� � ����������� ��� �������� ���������� 
    //���������� ���������� ����� � ��������� �� 1 �� 10
    a = rand() % 10 +1;
    b = rand() % 10 +1;
    if (c == mult(a, b)) {//����� ������� mult() �� ���������� d=a, f=b
        std::cout << "You are right";
    }
    else {
     std::cout << "You are wrong";
    }
}