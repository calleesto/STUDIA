#include "TrojProst.h"
#include <iostream>
#include <cmath>
using namespace std;
TrojProst::TrojProst(double a, double b)
	: a(a), b(b)
{
	cout << "Konstruktor trojkat prostokatny(" << a << "," << b <<  ")" << endl;
}
double TrojProst::GetA() const {
	return a;
}
double TrojProst::GetB() const {
	return b;
}
void TrojProst::SetA(double a) {
	this->a = a;
}
void TrojProst::SetB(double b) {
	this->b = b;
}
double TrojProst::Obwod() const {
	double c = sqrt(a * a + b * b);
	return a + b + c;
}
double TrojProst::Pole() const {
	return a * b / 2;
}
void TrojProst::Wypisz(std::ostream& out) const {
	out << "Pole: " << Pole() << ", Obwod: " << Obwod() << std::endl;
}
TrojProst::~TrojProst() {
	std::cout << "Usuwam trojkat prostokatny: "
		<< "a = " << a << ", b = " << b
		<< ", Pole = " << Pole()
		<< ", Obwod = " << Obwod()
		<< std::endl;
}