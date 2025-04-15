package pl.edu.pg.eti.ksg.po.lab1.transformacje;
public class OdbicieY implements Transformacja{
    @Override
    public Transformacja getTransformacjaOdwrotna() throws
            BrakTransformacjiOdwrotnejException {
        return new OdbicieY();
    }
    @Override
    public Punkt transformuj(Punkt p) throws BrakTransformacjiOdbicia{
        if (p.getX() == 0) {
            throw new BrakTransformacjiOdbicia("punkt lezy na osi");
        }
        return new Punkt(p.getX() * -1, p.getY());
    }
    @Override
    public String toString() {
        return "Odbicie względem osi OY";
    }

}