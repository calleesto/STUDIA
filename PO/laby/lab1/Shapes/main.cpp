#include "FiguraPlaska.h"
#include "Prostokat.h"
#include "Trojkat.h"
#include "Kolo.h"
#include "Kwadrat.h"
#include "TrojProst.h"

int main() {
    //prostokat i trojkat zdefiniowane poprzez zmienne lokalne
    Prostokat p(5, 10);
    Trojkat t(3, 3, 3);

    //kolo kwadrat oraz trojkat prostokaty zdefiniowane poprzez wskazniki
    Kolo ko(3);
    Kolo* koPtr = &ko;
    Kwadrat kw(3);
    Kwadrat* kwPtr = &kw;
    TrojProst tp(3, 4);
    TrojProst* tpPtr = &tp;

    //metode wypisz zmienilem na publiczna poniewaz jak byla protected to nie moglem jej uzyc w main.cpp (tutaj)
    p.Wypisz(std::cout);
    t.Wypisz(std::cout);
    koPtr->Wypisz(std::cout);
    kwPtr->Wypisz(std::cout);
    tpPtr->Wypisz(std::cout);
    return 0;
}