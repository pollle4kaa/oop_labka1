#include <iostream>

int plus(int a, int b);
int minus(int a, int b);
int umnozh(int a, int b);
int del(int a, int b);

int main() {
	int x, y;
	std::cin >> x >> y;
	std::cout << "rezultat plus: " << plus(x,y) << std::endl;
	std::cout << "rezultat minus: " << minus(x, y) << std::endl;
	std::cout << "rezultat umnozh: " << umnozh(x, y) << std::endl;
	std::cout << "rezultat del: " << del(x, y) << std::endl;
}