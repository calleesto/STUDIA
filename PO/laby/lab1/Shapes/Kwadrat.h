#pragma once
#include "FiguraPlaska.h"
class Kwadrat : public FiguraPlaska {
private:
	double a;
public:
	Kwadrat(double a);
	void Wypisz(std::ostream& out) const override;
	double GetA() const;
	void SetA(double a);
	double Obwod() const override;
	double Pole() const override;

	~Kwadrat() override;
};