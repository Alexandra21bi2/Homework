#include <iostream>
#include <cmath>

//������� square() ��������� ��� ����� ����� � �������� ���������� � ���������� �����, ������ ������� �������������� ������������
//�������� ���������� ���������� ������� main()
int square(int x, int y)
{
	return  (x * y) / 2;
}
//������� hypotenuse() ��������� ��� ����� ����� � �������� ���������� � ���������� �����, ������ �������� ����������
double hypotenuse(double z, double f)
{
	return sqrt(z*z + f*f);
}
int main()
{
	double a, b;
	std::cout << "Enter the value of the cathet a: "; //������ ������������ ������ �����
	std::cin >> a; //�������� ����� � ����������� ��� �������� ���������� 
	std::cout << "Enter the value of the cathet b: "; //������ ������������ ������ �����
	std::cin >> b; //�������� ����� � ����������� ��� �������� ����������
	std::cout << "The square = " << square(a, b) << std::endl; //����� ������� square() �� ���������� x=a, y=b
	std::cout << "The hypotenuse = " << hypotenuse(a, b) << std::endl; //����� ������� hypotenuse() �� ���������� z=a, f=b
	return 0;
}