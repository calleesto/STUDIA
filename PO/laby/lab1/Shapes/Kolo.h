#pragma once
#include "FiguraPlaska.h"
class Kolo : public FiguraPlaska {
private:
	double r;
	const double pi = 3.14;
public:
	void Wypisz(std::ostream& out) const override;
	Kolo(double r);
	double GetR() const;
	void SetR(double r);
	double Obwod() const override;
	double Pole() const override;
	~Kolo() override;
};
