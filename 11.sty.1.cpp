#include <iostream>

/* --------------------
	ParaLiczb
-------------------- */
class ParaLiczb {

	private:
		int a, b;
		static int ilosc;

	public:
		ParaLiczb(int x, int y);
		void iloscObiektow();
		void wypisz();
		int dajA();
		int dajB();
		virtual ~ParaLiczb();
};

int ParaLiczb::ilosc = 0;

ParaLiczb::ParaLiczb(int x, int y):a(x), b(y) { ilosc++; }

void ParaLiczb::iloscObiektow () {
	std::cout << "Ilosc obiektow: " << ilosc << std::endl;
} 

void ParaLiczb::wypisz () {
	std::cout << "(" << a << "," << b << ")" << std::endl;
} 

int ParaLiczb::dajA() { return a; }
int ParaLiczb::dajB() { return b; }

ParaLiczb::~ParaLiczb() { ilosc--; }

/* --------------------
	LiczbaZesp
-------------------- */

class LiczbaZesp : public ParaLiczb {
	private:
		static int ilosc;

	public:
		LiczbaZesp(int x, int y);
		void iloscObiektow();
		void wypisz();
};

int LiczbaZesp::ilosc = 0;

LiczbaZesp::LiczbaZesp(int x, int y):ParaLiczb(x, y) { ilosc++; }

void LiczbaZesp::iloscObiektow () {
	std::cout << "Ilosc obiektow: " << ilosc << std::endl;
} 

void LiczbaZesp::wypisz () {
	std::cout << dajA() << "+i*" << dajB() << std::endl;
} 

/* --------------------
	Wektor
-------------------- */

class Wektor : public ParaLiczb {
	private:
		static int ilosc;

	public:
		Wektor(int x, int y);
		void iloscObiektow();
		void wypisz();
};

int Wektor::ilosc = 0;

Wektor::Wektor(int x, int y):ParaLiczb(x, y) { ilosc++; }

void Wektor::iloscObiektow () {
	std::cout << "Ilosc obiektow: " << ilosc << std::endl;
} 

void Wektor::wypisz () {
	std::cout << "[" << dajA() << "," << dajB() << "]" << std::endl;
} 

int main() {

	// zamiast inicjowania z klawiatury
	ParaLiczb A(20,50);
	LiczbaZesp B(5, 2);
	Wektor C(5, -6);

	std::cout << "Obiekt ParaLiczb: ";
	A.wypisz();
	A.iloscObiektow();

	std::cout << "Obiekt LiczbaZesp: ";
	B.wypisz();
	B.iloscObiektow();

	std::cout << "Obiekt Wektor: ";
	C.wypisz();
	C.iloscObiektow();

	return 0;
}
