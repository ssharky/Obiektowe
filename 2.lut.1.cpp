#include <iostream>
#include <string>

int *sequence(int n) {

	if(n < 1) {
		std::string badVal = "Wartosc n nie moze byc mniejsza od 1";
		throw badVal;
	}

	int *T = new int[n];

	for(int i=0; i<n; i++)
		if(i < 2) T[i] = i+1;
		else T[i] = T[i-1] + T[i-2];

	return T;
}

int main() {
	
	int n, *T;

	/*std::cout << "Podaj wartosc n: ";
	std::cin >> n;*/

	n = 10;

	try {
		T = sequence(n);
		std::cout << "Dla n = " << n << " ciag jest nastepujacy: ";
		for(int i=0; i<n; i++) std::cout << T[i];
	}

	catch(std::string &e) {
		std::cout << e << std::endl;
	}

	return 0;
}
