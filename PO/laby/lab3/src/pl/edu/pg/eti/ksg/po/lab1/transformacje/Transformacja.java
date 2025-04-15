package pl.edu.pg.eti.ksg.po.lab1.transformacje;
public interface Transformacja{
    Punkt transformuj(Punkt p) throws BrakTransformacjiOdbicia;
    Transformacja getTransformacjaOdwrotna()
            throws BrakTransformacjiOdwrotnejException;
}