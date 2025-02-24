#include <iostream>

int plus(int a, int b);
int minus(int a, int b);
int umnozh(int a, int b);

int main() {
	int x, y;
	std::cin >> x >> y;
	std::cout << "plus: " << plus(x,y) << std::endl;
	std::cout << "minus: " << minus(x, y) << std::endl;
	std::cout << "minus: " << umnozh(x, y) << std::endl;
}