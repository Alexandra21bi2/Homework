#include <iostream>
const double PI = 3.14;
//������� length() ��������� ���� ����� ����� � ���� ��������� � �������� ���������� � ���������� �����, ������ ����� ����������
//�������� ��������� ���������� ������� main()
double length(int x)
{
	return  2 * PI * x;
}
//������� square() ��������� ���� ����� ����� � ���� ��������� � �������� ���������� � ���������� �����, ������ ������� �����
//�������� ��������� ���������� ������� main()
double square(int y)
{
	return  PI * (y * y);
}
int main()
{

	std::cout << "Enter the value of radius: "; //������ ������������ ������ �����
	int r = 0;
	std::cin >> r; //�������� ����� � ����������� ��� �������� ���������� 
	std::cout << "The length  = " << length(r) << std::endl; //����� �������length() �� ���������� x=r
	std::cout << "The square = " << square(r) << std::endl; //����� ������� square() �� ���������� y=r
	return 0;
}