#include <iostream>

//������� weight() ��������� ���� ����� � �������� ��������� � ���������� �����, ������ ��������� ���� �������� � �������� ������
//�������� ���������� ���������� ������� main()
int weight(int x)
{
	return  x-100;
}
int main()
{
	int h, w;
	std::cout << "Enter the height: "; //������ ������������ ������ ����
	std::cin >> h; //�������� ����� � ����������� ��� �������� ���������� 
	std::cout << "Enter the weight: "; //������ ������������ ������ ���
	std::cin >> w; //�������� ����� � ����������� ��� �������� ���������� 
	//������ ������� ��� ������
	if (w > weight(h)) {//����� ������� weight() �� ���������� x=h
		std::cout << "You need to lose weight" << std::endl; 
	}
	if (w < weight(h)) {
		std::cout << "You need to gain weight" << std::endl;
	}
	if (w == weight(h)) {
		std::cout << "You have an ideal weight" << std::endl;
	}
	return 0;
}