package pl.edu.pg.eti.ksg.po.lab1.transformacje;
public class OdbicieX implements Transformacja{
    @Override
    public Transformacja getTransformacjaOdwrotna() throws
            BrakTransformacjiOdwrotnejException {
        return new OdbicieX();
    }
    @Override
    public Punkt transformuj(Punkt p) throws BrakTransformacjiOdbicia {
        if (p.getY() == 0) {
            throw new BrakTransformacjiOdbicia("punkt lezy na osi");
        }
        return new Punkt(p.getX(), p.getY() * -1);
    }
    @Override
    public String toString() {
        return "Odbicie względem osi OX";
    }

}