#include <iostream>

int main() {

	std::cout << "Welcome to Jats Super Awesome Calculator!!!(This is A Viris Not A False Positive)\n";

	int a; 
	std::cout << "Enter First Number\n";
	std::cin >> a;

	char c;
	std::cout << "Enter Operator(+,-,*,/)\n";
	std::cin >> c;

	int b;
	std::cout << "Enter Second Number\n";
	std::cin >> b;

	switch (c) {
	case '+':
	std::cout << a + b;
	break;
	case '-':
	std::cout << a - b;
	break;
	case '*':
	std::cout << a * b;
	break;
	case '/':
	std::cout << a / b;
	break;
	case '@':
	std::cout << "Ur Comuter If Fried";
	break;
	default:
		std::cout << "Not a valid Operation\n";
	}
}