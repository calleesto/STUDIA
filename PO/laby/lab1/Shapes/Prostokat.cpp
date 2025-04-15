#include "Prostokat.h"
#include <iostream>
using namespace std;
Prostokat::Prostokat(double a, double b)
	: a(a), b(b)
{
	cout << "Konstruktor Prostokata(" << a << "," << b << ")" << endl;
}
double Prostokat::GetA() const {
	return a;
}
double Prostokat::GetB() const {
	return b;
}
void Prostokat::SetA(double a) {
	this->a = a;
}
void Prostokat::SetB(double b) {
	this->b = b;
}
double Prostokat::Obwod() const{
	return 2 * a + 2 * b;
}
double Prostokat::Pole() const{
	return a * b;
}
void Prostokat::Wypisz(std::ostream& out) const {
	out << "Pole: " << Pole() << ", Obwod: " << Obwod() << std::endl;
}
Prostokat::~Prostokat() {
	std::cout << "Usuwam prostokat: "
		<< "a = " << a << ", b = " << b
		<< ", Pole = " << Pole()
		<< ", Obwod = " << Obwod()
		<< std::endl;
}