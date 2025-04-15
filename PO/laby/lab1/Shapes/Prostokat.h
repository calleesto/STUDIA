#pragma once
#include "FiguraPlaska.h"
class Prostokat : public FiguraPlaska {
private:
	double a, b;
public:
	Prostokat(double a, double b);
	void Wypisz(std::ostream& out) const override;
	double GetA() const;
	void SetA(double a);
	double GetB() const;
	void SetB(double b);
	double Obwod() const override;
	double Pole() const override;

	~Prostokat() override;
};