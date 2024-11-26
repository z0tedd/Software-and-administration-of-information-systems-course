#include <iostream>

int main() {
	int Number;
	std::cin >> Number;
	bool a1 = Number >0;
	bool a2 = Number != 0;
	std::cout << (a1 + (a1%2-1))*a2;

}
