#include "Kwadrat.h"
#include <iostream>
using namespace std;
Kwadrat::Kwadrat(double a)
	: a(a)
{
	cout << "Konstruktor Kwadrata(" << a << ")" << endl;
}
double Kwadrat::GetA() const {
	return a;
}
void Kwadrat::SetA(double a) {
	this->a = a;
}
double Kwadrat::Obwod() const {
	return 4*a;
}
double Kwadrat::Pole() const {
	return a * a;
}
void Kwadrat::Wypisz(std::ostream& out) const {
	out << "Pole: " << Pole() << ", Obwod: " << Obwod() << std::endl;
}
Kwadrat::~Kwadrat() {
	std::cout << "Usuwam kwadrat: "
		<< "a = " << a
		<< ", Pole = " << Pole()
		<< ", Obwod = " << Obwod()
		<< std::endl;
}