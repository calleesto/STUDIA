#include "Kolo.h"
#include <iostream>
#include <cmath>
using namespace std;
Kolo::Kolo(double r)
	: r(r)
{
	cout << "Konstruktor Kola(" << r << ")" << endl;
}
double Kolo::GetR() const {
	return r;
}
void Kolo::SetR(double r) {
	this->r = r;
}
double Kolo::Obwod() const {
	return 2*pi*r;
}
double Kolo::Pole() const {
	return pi*r*r;
}
void Kolo::Wypisz(std::ostream& out) const {
	out << "Pole: " << Pole() << ", Obwod: " << Obwod() << std::endl;
}
Kolo::~Kolo() {
	std::cout << "Usuwam kolo: "
		<< "radius = " << r
		<< ", Pole = " << Pole()
		<< ", Obwod = " << Obwod()
		<< std::endl;
}
