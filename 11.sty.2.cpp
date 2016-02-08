#include <iostream>
#include <cstring>

class Student {
	private:
		char *surname, year[3];

	public:
		static int count;
		Student();
		Student(char *n, char *y);
		char * studentName();
		char * studentYear();
		Student & operator = (const Student &v);
		virtual ~Student();
};

int Student::count = 0;

Student::Student() { count++; }

Student::Student(char *n, char *y) {
	surname = new char [sizeof(n)/sizeof(char)];
	strcpy(surname, n);
	strcpy(year, y);
	count++;
}

char * Student::studentName() { return surname; }
char * Student::studentYear() { return year; }
Student & Student::operator = (const Student &v) {
	this->surname = new char [sizeof(v.surname)/sizeof(char)];
	strcpy(this->surname, v.surname);
	strcpy(this->year, v.year);
}

Student::~Student() { count--; }

int main() {

	char surname[] = "Wojnicz", year[] = "II";
	Student A(surname, year), B;

	std::cout << "Student 1: " << A.studentName() << ", rok " << A.studentYear() << std::endl;

	B = A; // tylko po co przeciążenie?

	std::cout << "Student 2: " << B.studentName() << ", rok " << B.studentYear() << std::endl;

	return 0;
}
