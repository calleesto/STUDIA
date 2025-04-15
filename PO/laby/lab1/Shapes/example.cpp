//example code pokazujacy polimorfizm, nadpisanie metod i przeciazenie metod
#include "FiguraPlaska.h"
#include "Kolo.h"
#include "Kwadrat.h"

class Matematyka {
public:
    int Dodaj(int a, int b) {
        return a + b;
    }

    int Dodaj(int a, int b, int c) {
        return a + b + c;
    }
};

//zmien nazwe oryginalnego maina na cos innego a tutaj na main
int example() {
    Kolo ko(3);
    Kwadrat kw(3);
    FiguraPlaska* kwadrat = &ko;
    FiguraPlaska* kolo = &kw;

    FiguraPlaska* figury[2] = { kwadrat, kolo };

    //tutaj widzimy polimorfizm poniewaz wywolujemy wirtualna metode z klasy bazowaj ktore przekierowywuje nas na podklasy i tam sa nadpisywane
    for (int i = 0; i < 2; ++i) {
        std::cout << "Obwod: " << figury[i]->Obwod() << std::endl;  
        std::cout << "Pole: " << figury[i]->Pole() << std::endl;    
    }

    //zeby zaprezentowac przeciazanie pozwolilem sobie dodac nowa klase ktora definiuje dwie metody o tej samej nazwie i w zaleznosci od tego ile argumentow podam przy wywolywaniu to zostanie wybrana poprawna metoda
    Matematyka math;
    std::cout << "Dodawanie dwoch liczb " << math.Dodaj(1, 2) << std::endl;
    std::cout << "Dodawanie trzech liczb " << math.Dodaj(1, 2, 3) << std::endl;



    return 0;
}