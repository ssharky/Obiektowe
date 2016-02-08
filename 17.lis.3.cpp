#include <iostream>
using namespace std;

/*--------------
-- CLASS Plane
--------------*/

class Plane {
	private:
		int range;

	public:
		Plane(int r);
		void cout_range();
};

Plane::Plane(int r):range(r) {}

void Plane::cout_range() {
	cout << "Zasieg: " << range << endl;
}

/*--------------
-- CLASS Airliner
--------------*/

class Airliner : public Plane {

	private:
		int seats;

	public:
		Airliner(int r, int s);
		void cout_info();

};

Airliner::Airliner(int r, int s):Plane(r), seats(s) {}
void Airliner::cout_info() {
	cout_range();
	cout << "Ilosc miejsc: " << seats << endl;
}

int main() {
	
	int range, seats;

	cout << "Podaj zasieg samolotu: ";
	cin >> range;

	Plane A(range);

	cout << "Podaj zasieg samolotu pasazerskiego: ";
	cin >> range;
	cout << "Podaj pojemnosc samolotu pasazerskiego: ";
	cin >> seats;

	Airliner B(range, seats);

	cout << "Samolot A:" << endl;
	A.cout_range();

	cout << endl << "Samolot B:" << endl;
	B.cout_info();

	return 0;
}
