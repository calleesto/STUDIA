package pl.edu.pg.eti.ksg.po.lab1.transformacje;

public class Obrot implements Transformacja {
    private final double cosine, sine;

    public Obrot(double angleInRadians) {
        this.cosine = Math.cos(angleInRadians);
        this.sine = Math.sin(angleInRadians);
    }

    public Obrot(double cosine, double sine) {
        this.cosine = cosine;
        this.sine = sine;
    }

    @Override
    public Punkt transformuj(Punkt p) {
        return new Punkt(
                (p.getX() * cosine) - (p.getY() * sine),
                (p.getX() * sine) + (p.getY() * cosine)
        );
    }

    @Override
    public Transformacja getTransformacjaOdwrotna() {
        return new Obrot(cosine, -sine);
    }

    @Override
    public String toString() {
        double angleInRadians = Math.atan2(sine, cosine);
        return "Obrot o kat " + angleInRadians + " radianow";
    }
}