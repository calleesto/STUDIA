#pragma once
#include "FiguraPlaska.h"
class TrojProst : public FiguraPlaska {
private:
	double a, b;
public:
	void Wypisz(std::ostream& out) const override;
	TrojProst(double a, double b);
	double GetA() const;
	void SetA(double a);
	double GetB() const;
	void SetB(double b);
	double GetC() const;
	void SetC(double c);
	double Obwod() const override;
	double Pole() const override;

	~TrojProst() override;
};
