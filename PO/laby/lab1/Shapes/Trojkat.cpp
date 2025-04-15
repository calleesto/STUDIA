#include "Trojkat.h"
#include <iostream>
#include <cmath>
using namespace std;
Trojkat::Trojkat(double a, double b, double c)
	: a(a), b(b), c(c)
{
	cout << "Konstruktor Trojkata(" << a << "," << b << "," << c << ")" << endl;
}
double Trojkat::GetA() const {
	return a;
}
double Trojkat::GetB() const {
	return b;
}
double Trojkat::GetC() const {
	return c;
}
void Trojkat::SetA(double a) {
	this->a = a;
}
void Trojkat::SetB(double b) {
	this->b = b;
}
void Trojkat::SetC(double c) {
	this->c = c;
}
double Trojkat::Obwod() const {
	return a+b+c;
}
double Trojkat::Pole() const {
	double s = (a + b + c) / 2;
	return sqrt(s*(s-a)*(s - b)*(s - c));
}
void Trojkat::Wypisz(std::ostream& out) const {
	out << "Pole: " << Pole() << ", Obwod: " << Obwod() << std::endl;
}
Trojkat::~Trojkat() {
	std::cout << "Usuwam trojkat: "
		<< "a = " << a << ", b = " << b << ", c = " << c
		<< ", Pole = " << Pole()
		<< ", Obwod = " << Obwod()
		<< std::endl;
}