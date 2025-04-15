package pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.beskidy;

import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.Atrakcja;

public class Panorama extends Atrakcja {

    public Panorama(String nazwa, String opis) {
        super(nazwa, opis, ((double) 1 /6)); // 10 minut
    }

    public Panorama(String nazwa) {
        super(nazwa, "Panorama górska, którą można podziwiać przy dobrej widoczności. Niektórzy przewodnicy opowiadają grupie jakie szczyty są widoczne.", ((double) 1 /6));
    }
}