package pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.beskidy;

import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.Atrakcja;

public class DrewnianaCerkiew extends Atrakcja {

    public DrewnianaCerkiew(String nazwa, String opis) {
        super(nazwa, opis, 0.5); // pol godziny
    }

    public DrewnianaCerkiew(String nazwa) {
        super(nazwa, "Zabytkowa drewniana cerkiew w Beskidach", 0.5);
    }
}