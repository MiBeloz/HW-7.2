#include <iostream>

#define SUB(a, b) ((a) - (b))


int main(int argc, char** argv) {
	setlocale(LC_ALL, "ru");

	int a = 6;
	int b = 5;
	int c = 2;

	std::cout << SUB(a, b) << std::endl;
	std::cout << SUB(a, b) * c << std::endl;
	std::cout << SUB(a, b + c) * c << std::endl;

	system("pause > nul");

	return 0;
}