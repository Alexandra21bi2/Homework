#include <iostream>

//������� square() ��������� ��� ����� ����� � �������� ���������� � ���������� �����, ������ ������� �������� � ��������� ����������
//�������� ���������� ���������� ������� main()
int square(int x, int y, int z)
{
	return  (z*(x + y)) / 2;
}
int main()
{
	std::cout << "Enter the value of the base 1: "; //������ ������������ ������ �����
	int b1 = 0; 
	std::cin >> b1; //�������� ����� � ����������� ��� �������� ���������� 
	std::cout << "Enter the value of the base 2: "; //������ ������������ ������ �����
	int b2 = 0;
	std::cin >> b2; //�������� ����� � ����������� ��� �������� ����������
	std::cout << "Enter the height value: "; //������ ������������ ������ �����
	int h = 0;
	std::cin >> h; //�������� ����� � ����������� ��� �������� ����������
	std::cout << "The square = " << square(b1, b2, h) << std::endl; //����� ������� square() �� ���������� x=b1, y=b2, h=z
	return 0;
}