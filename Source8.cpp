#include <iostream>
#include <cmath>

double med1(double k, double l, double m) {
    return 0.5 * sqrt(2 * k * k + 2 * l * l  - m * m); // ������������ ����� ������� ��������� ������������
}
double med2(double k, double l, double m) {
    return 0.5 * sqrt(2 * k * k + 2 * m * m  - l * l);//������������ ����� ������� ��������� ������������
}
double med3(double k, double l, double m) {
    return 0.5 * sqrt(2 * m * m + 2 * l * l - k *k );//������������ ����� ������� ��������� ������������
}
double newmed1(double g, double s, double v) {
    return 0.5 * sqrt(2 * g * g + 2 * s * s - v * v); // ������������ ����� ������� ������ ������������
}
double newmed2(double g, double s, double v) {
    return 0.5 * sqrt(2 * g * g + 2 * v * v - s * s);//������������ ����� ������� ������ ������������
}
double newmed3(double g, double s, double v) {
    return 0.5 * sqrt(2 * v * v + 2 * s * s - g * g);//������������ ����� ������� ������ ������������
}
int main()
{
    int a, b, c; // ��������� ���������� 
    std::cout << "Enter a side a: "; // ������ ������������ ������ ������
    std::cin >> a; //�������� ����� � ����������� ��� �������� ���������� 
    std::cout << "Enter a side b: ";//������ ������������ ������ �����
    std::cin >> b; //�������� ����� � ����������� ��� �������� ���������� 
    std::cout << "Enter a side c: ";//������ ������������ ������ �����
    std::cin >> c; //�������� ����� � ����������� ��� �������� ���������� 
   double m1 = med1(a, b, c); //�������� ������� med1() �� ���������� k=a, l=b, m=c
   double m2 = med2(a, b, c);//�������� ������� med2() �� ���������� k=a, l=b, m=c
   double m3 = med3(a, b, c);//�������� ������� med3() �� ���������� k=a, l=b, m=c
   double nm1 = newmed1(m1, m2, m3); //�������� ������� nm1() �� ���������� m1=g, m2=s, m3=v
   double nm2 = newmed2(m1, m2, m3);//�������� ������� nm2() �� ���������� m1=g, m2=s, m3=v
   double nm3 = newmed3(m1, m2, m3);//�������� ������� nm3() �� ���������� m1=g, m2=s, m3=v
    std::cout << "The length of a median 1: " << nm1 << std::endl;
    std::cout << "The length of a median 2: " << nm2 << std::endl;
    std::cout << "The length of a median 3: " << nm3 << std::endl;
}