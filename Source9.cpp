#include <iostream>
//������� hours() ��������� ��������� ���������� ����� � ������� ������� ���������� �������� ������ �� ���������� ������ � ����� ����
int hours(int d) {
    return d / 3600;
}
//������� minutes() ��������� ��������� ���������� ����� � ������� ������� ���������� �������� ������ �� ���������� ������ � ����� ������
int minutes(int c) {
    return c / 60;
}
int main()
{
    int hr, min, sec; // ��������� ���������� 
    std::cout << "Enter number of seconds: "; // ������ ������������ ������ ������
    std::cin >> sec; //�������� ����� � ����������� ��� �������� ���������� 
    std::cout << hours(sec) << " hour(s) " << std::endl; //����� ������� hours() �� ���������� d=sec
    std::cout << minutes(sec) << " min(s) " << std::endl; //����� ������� minutes() �� ���������� c=sec
    return 0;
}
    