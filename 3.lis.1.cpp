#include <iostream>
using namespace std;

class Numbers {

	private:
		float *T; // 10 elements
	public:
		Numbers();
		Numbers(float *tab);
		int countX(float value);

};

Numbers::Numbers() {
	T = new float [10];
	for(int i=0; i<10; i++)
		T[i] = 0.0;
}

Numbers::Numbers(float *tab) {
	T = new float [10];
		for(int i=0; i<10; i++)
			T[i] = tab[i];
}

int Numbers::countX(float value) {
	int cap = 0;

	for(int i=0; i<10; i++)
		if(T[i] == value)
			cap++;
	return cap;
}

int main() {

	Numbers A;
	float T[10];

	cout << "Podaj 10 liczb zmiennoprzecinkowych:" << endl;

	for(int i=0; i<10; i++)
		// T[i] = (float)i;
		cin >> T[i]; // wersja z cin (10 lis.)

	Numbers B(T);

	float x = 5.0;
	cout << "Ilość liczb " << x << " wynosi " << B.countX(x) << endl;

	return 0;
}
