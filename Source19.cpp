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
        s += y % 10;//���������� ������� �� ������� � �����
        y /= 10;//�������� ���������� � ����� ����� �� ����� �����
    }
    s += y;
    return s;
}
int main()
{
    int n, Sum, b, Mult; //��������� ���������� 
    std::cout << "Enter a three-digit number: "; //������ ������������ ������ �����
    std::cin >> n; //�������� ����� � ����������� ��� �������� ���������� 
    Sum = 0;
    Mult = 0;
    std::cout << "Enter a random number: "; //������ ������������ ������ �����
    std::cin >> b;
    if (b < multiply(n, Mult)) {//����� ������� multiply() �� ���������� z=n, m=Mult
        std::cout << "The multiply is more than b" << std::endl;//������� ��������� 
    }
    else {
        std::cout << "The multiply is less than b" << std::endl;
    }
    if (summary(n, Sum) % 7 == 0) {//����� ������� summary() �� ���������� y=n, s=Sum
        std::cout << "The summary is a multiple of 7" << std::endl;//������� ��������� 
    }
    else {
        std::cout << "The summary is not a multiple of 7" << std::endl;
    }


}
