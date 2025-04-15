package pl.edu.pg.eti.ksg.po.lab2;

import java.util.HashSet;
import java.util.Set;

import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.*;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.*;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.beskidy.DrewnianaCerkiew;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.beskidy.Panorama;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.beskidy.Schronisko;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.ludzie.Czlowiek;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.ludzie.PrzewodnikStudencki;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.ludzie.Student;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.ludzie.StudentKSG;

public class JavaLab2 {
    public static void main(String[] args) {
        Wycieczka one = doDydiowki();
        Wycieczka two = blotostrada();

        PrzewodnikStudencki przewodnik = new PrzewodnikStudencki("Stefan", "Długonogi", Czlowiek.Plec.MEZCZYZNA);
        Set uczestnicy = new HashSet<>();
        uczestnicy.add(new Student("Alojzy", "Mechanik", Czlowiek.Plec.MEZCZYZNA));
        uczestnicy.add(new Student("Ada", "Lovelace", Czlowiek.Plec.KOBIETA));
        uczestnicy.add(new Student("Jan", "Elektronik", Czlowiek.Plec.MEZCZYZNA));
        uczestnicy.add(new StudentKSG("Piotr","Teledetekcyjny", Czlowiek.Plec.MEZCZYZNA));

        Grupa g = new Grupa(przewodnik, uczestnicy);

        SymulatorWycieczki symulacjaOne = new SymulatorWycieczki(g, one);

        symulacjaOne.dodajSluchaczaPostepow((elementWycieczki, lp, liczbaElementow) -> {
            System.out.println("Postęp wycieczki: " + lp + "/" + liczbaElementow + " (" + Math.round((double)lp / liczbaElementow * 100) + "%)");

            System.out.print("[");
            int pasekDlugosc = 20;
            int wypelnienie = (int)((double)lp / liczbaElementow * pasekDlugosc);

            for(int i = 0; i < pasekDlugosc; i++) {
                if(i < wypelnienie) System.out.print("=");
                else System.out.print(" ");
            }
            System.out.println("]");
        });

        symulacjaOne.symuluj();

        SymulatorWycieczki symulacjaTwo = new SymulatorWycieczki(g, two);

        symulacjaTwo.dodajSluchaczaPostepow(new SluchaczPostepow() {
            @Override
            public void aktualizujPostep(ElementWycieczki elementWycieczki, int lp, int liczbaElementow) {
                double procent = (double)lp / liczbaElementow * 100;
                String elementNazwa = "";

                if (elementWycieczki instanceof Wedrowka) {
                    elementNazwa = ((Wedrowka) elementWycieczki).getNazwa();
                } else if (elementWycieczki instanceof Atrakcja) {
                    elementNazwa = ((Atrakcja) elementWycieczki).getNazwa();
                }

                System.out.println("Grupa pokonała element: " + elementNazwa);
                System.out.println("Postęp: " + lp + " z " + liczbaElementow + " elementów wycieczki (" + String.format("%.1f", procent) + "%)");
            }
        });

        symulacjaTwo.symuluj();
    }

    public static Wycieczka doDydiowki() {
        Wycieczka ret = new Wycieczka("Do Dydiówki");
        ret.dodajElementWycieczki(new Droga(1.0));
        ret.dodajElementWycieczki(new DrewnianaCerkiew("Smolnik"));
        ret.dodajElementWycieczki(new Droga(4.0));
        ret.dodajElementWycieczki(new Las(2.0));
        ret.dodajElementWycieczki(new Droga(5.0));

        return ret;
    }

    public static Wycieczka blotostrada() {
        Wycieczka ret = new Wycieczka("Blotostrada");
        ret.dodajElementWycieczki(new Droga(2.0));
        ret.dodajElementWycieczki(new PrzeprawaPrzezRzeke(0.5));
        ret.dodajElementWycieczki(new GestyLas(1.0));
        ret.dodajElementWycieczki(new Panorama("Piekna"));
        ret.dodajElementWycieczki(new Droga(5.0));
        ret.dodajElementWycieczki(new PrzeprawaPrzezRzeke(0.5));
        ret.dodajElementWycieczki(new Las(2.0));
        ret.dodajElementWycieczki(new DrewnianaCerkiew("Smolnik"));
        ret.dodajElementWycieczki(new Droga(3.0));
        ret.dodajElementWycieczki(new GestyLas(1.0));
        ret.dodajElementWycieczki(new Bloto(1.0));
        ret.dodajElementWycieczki(new Schronisko("Pogodne"));

        return ret;
    }
}