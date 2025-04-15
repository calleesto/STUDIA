package pl.edu.pg.eti.ksg.po.lab1.transformacje;

public class ZlozenieTransformacji implements Transformacja {
    private final Transformacja[] transformacje;

    public ZlozenieTransformacji(Transformacja[] transformacje) {
        this.transformacje = new Transformacja[transformacje.length]; //length property is an inbuild feature in java
        for (int i = 0; i < transformacje.length; i++) {
            this.transformacje[i] = transformacje[i];
        }
    }

    @Override
    public Punkt transformuj(Punkt p) throws BrakTransformacjiOdbicia {
        Punkt wynik = p;
        for (int i = 0; i < transformacje.length; i++) {
            wynik = transformacje[i].transformuj(wynik);
        }
        return wynik;
    }

    @Override
    public Transformacja getTransformacjaOdwrotna() throws BrakTransformacjiOdwrotnejException {
        //tworzenie transformacji odwrotnych w nowej tablicy w odwrotnej kolejnosci
        Transformacja[] odwrotne = new Transformacja[transformacje.length];

        for (int i = 0; i < transformacje.length; i++) {
            odwrotne[transformacje.length - 1 - i] = transformacje[i].getTransformacjaOdwrotna();
        }

        return new ZlozenieTransformacji(odwrotne);
    }

    @Override
    public String toString() {
        StringBuilder opis = new StringBuilder("Zlozenie transformacji: [");
        for (int i = 0; i < transformacje.length; i++) {
            opis.append(transformacje[i]);
            if (i < transformacje.length - 1) {
                opis.append(", ");
            }
        }
        opis.append("]");
        return opis.toString();
    }
}