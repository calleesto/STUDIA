package pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.beskidy;

import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.Atrakcja;

public class Schronisko extends Atrakcja {

    public Schronisko(String nazwa, String opis, double cena) {
        super(nazwa, opis, 0.5);
    }

    public Schronisko(String nazwa) {
        super(nazwa, "Panorama górska, którą można podziwiać przy dobrej widoczności. Niektórzy przewodnicy opowiadają grupie jakie szczyty są widoczne.", 0.5);
    }
}