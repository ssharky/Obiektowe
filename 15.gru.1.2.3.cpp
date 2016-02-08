#include <iostream>

class Complex {
	private:
		int a, b;

	public:
		Complex();
		Complex(int x, int y);
		friend std::ostream & operator << (std::ostream &, const Complex &);
		friend std::istream & operator >> (std::istream &, Complex &);
};

Complex::Complex() {}
Complex::Complex(int x, int y):a(x), b(y) {}

std::ostream & operator << (std::ostream &out, const Complex &v) {
	return out << v.a << "+i*" << v.b << std::endl; // zad 2
	//return out << v.a << "*exp(i*" << v.b << ")" << std::endl; // zad 3
}

std::istream & operator >> (std::istream &in, Complex &v) {
	return in >> v.a >> v.b;
}

int main() {

	Complex A(5,10), B;

	std::cout << "Liczba 1: " << A << std::endl;

	std::cout << "Nowa liczba zespolona, podaj a i b: " << std::endl;
	std::cin >> B;

	std::cout << "Liczba 2: " << B << std::endl;
	
	return 0;
}
