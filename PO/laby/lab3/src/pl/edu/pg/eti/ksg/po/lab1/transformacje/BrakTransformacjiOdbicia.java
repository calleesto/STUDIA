package pl.edu.pg.eti.ksg.po.lab1.transformacje;
/*
 * Klasa ta jawnie dziedziczy po klasie java.lang.Exception
 */
public class BrakTransformacjiOdbicia extends Exception
{
  public BrakTransformacjiOdbicia()
  {
//Niejawne wywołanie konstruktora klasy nadrzędnej
//super();
  }
  /*
   * Konstruktor przyjmujący jako parametr tekst opisujący błąd
   */
  public BrakTransformacjiOdbicia(String message) {
    super(message);
  }
  /*
   * Konstruktor przyjmujący jako parametr referencje do innego
   * wyjątku, który spowodował błąd
   */
  public BrakTransformacjiOdbicia(Throwable cause) {
    super(cause);
  }
  /*
   * Konstruktor przyjmujący jako parametr tekst opisujący błąd
   * oraz wyjątek, który spowodował błąd.
   */
  public BrakTransformacjiOdbicia(String message, Throwable cause) {
    super(message, cause);
  }
}