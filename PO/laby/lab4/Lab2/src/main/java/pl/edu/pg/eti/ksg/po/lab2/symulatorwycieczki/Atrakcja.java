package pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki;

public abstract class Atrakcja implements ElementWycieczki {

    private String nazwa;
    private String opis;
    private double cena;
    private double czasZwiedzania; // czas zwiedzania w godzinach

    public Atrakcja(String nazwa, String opis, double czasZwiedzania) {
        this.nazwa = nazwa;
        this.opis = opis;
        this.cena = cena;
        this.czasZwiedzania = czasZwiedzania;
    }

    @Override
    public String getNazwa() {
        return nazwa;
    }

    public String getOpis() {
        return opis;
    }

    public double getCzasZwiedzania() {
        return czasZwiedzania;
    }

    public void setCzasZwiedzania(double czasZwiedzania) {
        this.czasZwiedzania = czasZwiedzania;
    }
}