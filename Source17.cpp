#include <iostream>

int main()
{
	int a;
	std::cout << "Enter the number(1-99): "; //?????? ???????????? ?????? ?????
	std::cin >> a; //???????? ????? ? ??????????? ??? ???????? ?????????? 
	if (1 <= a && a <= 99) {//?????? ?????????? ????????? ???????? ?
		//????????? ????? ???????? ??????? ??? ?????????
		if (a == 1 || a == 21 || a == 31 || a == 41 || a == 51 || a == 61 || a == 71 || a == 81 || a == 91) {
			std::cout << a << " kopeika";
		}
		else if (2 <= a && a <= 4 || 22 <= a && a <= 24 || 32 <= a && a <= 34 || 42 <= a && a <= 44 || 52 <= a && a <= 54 || 62 <= a && a <= 64 || 72 <= a && a <= 74 || 82 <= a && a <= 84 || 92 <= a && a <= 94) {
			std::cout << a << " kopeiki";
		}
		else if (5 <= a && a <= 20 || 25 <= a && a <= 30 || 35 <= a && a <= 40 || 45 <= a && a <= 50 || 55 <= a && a <= 60 || 65 <= a && a <= 70 || 75 <= a && a <= 80 || 85 <= a && a <= 90 || 95 <= a && a <= 99) {
			std::cout << a << " kopeek";
		}
	}
	else {
		std::cout << "Error";
	}
}