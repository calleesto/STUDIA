package pl.edu.pg.eti.ksg.po.lab1.transformacje;
import pl.edu.pg.eti.ksg.po.lab1.transformacje.Translacja;
import pl.edu.pg.eti.ksg.po.lab1.transformacje.Skalowanie;
import pl.edu.pg.eti.ksg.po.lab1.transformacje.Obrot;
import pl.edu.pg.eti.ksg.po.lab1.transformacje.BrakTransformacjiOdwrotnejException;
import pl.edu.pg.eti.ksg.po.lab1.transformacje.Punkt;
import pl.edu.pg.eti.ksg.po.lab1.transformacje.Transformacja;

public class Javalab1 {
    public static void main(String[] args)
    {
        /*
         * Konstrukcja językowa try {} catch (...){} służy do
         * obsługi wyjątków. Kod w bloku try jest monitorowany
         * pod kątem wystąpienia wyjątku bądź wyjątków
         * wspomnianych na początku bloku/bloków catch.
         * Jeżeli gdzieś w bloku try wystąpi wyjątek, to sterowanie
         * zostanie natychmiast przeniesione do bloku catch.
         * Tam powinien znajdować się kod obsługujący wyjątek.
         * Może to być np. wypisanie stosu wywołań na wyjście błędów
         * lub zapisanie wyjątku w logach, lub wyrzucenie (zgłoszenie)
         * innego wyjątku lepiej opisującego sytuacje (można załączyć
         * wyjątek który zainicjował to zdarzenie patrz. Konstruktor
         * klasy java.lang.Exception)
         */

//        //TRANSLACJA
//        try {
//            Punkt p1 = Punkt.E_X;
//            System.out.println(p1);
//            Transformacja tr = new Translacja(5, 6);
//            System.out.println(tr);
//            Punkt p2 = tr.transformuj(p1);
//            System.out.println(p2);
//            Transformacja trr = tr.getTransformacjaOdwrotna();
//            System.out.println(trr);
//            Punkt p3 = trr.transformuj(p2);
//            System.out.println(p3);
//
//        } catch (BrakTransformacjiOdwrotnejException | BrakTransformacjiOdbicia ex)
//        {
//            ex.printStackTrace();
//        }
//        System.out.println();
//
//
//        //SKALOWANIE
//        try
//        {
//            Punkt p1 = new Punkt(2, 2);
//            System.out.println(p1);
//            Transformacja tr2 = new Skalowanie(5, 4);
//            System.out.println(tr2);
//            Punkt p2 = tr2.transformuj(p1);
//            System.out.println(p2);
//            Transformacja trr2 = tr2.getTransformacjaOdwrotna();
//            System.out.println(trr2);
//            Punkt p3 = trr2.transformuj(p2);
//            System.out.println(p3);
//        }
//        catch(BrakTransformacjiOdwrotnejException | BrakTransformacjiOdbicia ex)
//        {
//            ex.printStackTrace();
//        }
//        System.out.println();
//
//
//        // SKALOWANIE
//        try
//        {
//            Punkt p1 = new Punkt(2, 2);
//            //tutaj skalaY bedaca rowna 0 wyrzuca exception poniewaz jest to dzielenie przez 0
//            Transformacja tr2 = new Skalowanie(5, 0);
//            System.out.println(tr2);
//            System.out.println(p1);
//            Punkt p2 = tr2.transformuj(p1); // tutaj program sie konczy
//            System.out.println(p2);
//            Transformacja trr2 = tr2.getTransformacjaOdwrotna();
//            System.out.println(trr2);
//            Punkt p3 = trr2.transformuj(p2);
//            System.out.println(p3);
//        }
//        catch(BrakTransformacjiOdwrotnejException | BrakTransformacjiOdbicia ex)
//        {
//            ex.printStackTrace();
//        }
//        System.out.println();
//
//
//        //OBROT
//        try
//        {
//            Punkt p1 = new Punkt(3, 4);
//            System.out.println(p1);
//            Transformacja tr3 = new Obrot(Math.PI/2);
//            System.out.println(tr3);
//            Punkt p2 = tr3.transformuj(p1);
//            System.out.println(p2);
//            Transformacja trr3 = tr3.getTransformacjaOdwrotna();
//            System.out.println(trr3);
//            Punkt p3 = trr3.transformuj(p2);
//            System.out.println(p3);
//
//            Transformacja tr4 = new Obrot(0.7071, 0.7071);
//            System.out.println(tr4);
//            Punkt p4 = tr4.transformuj(p1);
//            System.out.println(p4);
//        }
//        catch(BrakTransformacjiOdwrotnejException | BrakTransformacjiOdbicia ex)
//        {
//            ex.printStackTrace();
//        }
//        System.out.println();


        //ZLOZENIE TRANSFORMACJI
        try
        {
            Punkt p1 = new Punkt(0, 3);
            System.out.println(p1);

            Transformacja[] trans = new Transformacja[5];
            trans[0] = new OdbicieX();
            trans[1] = new OdbicieY();
            trans[2] = new Translacja(1, 1);
            trans[3] = new Skalowanie(2, 2);
            trans[4] = new Obrot(Math.PI/4);

            Transformacja tr5 = new ZlozenieTransformacji(trans);
            System.out.println(tr5);

            Punkt p2 = tr5.transformuj(p1);
            System.out.println(p2);

            Transformacja trr5 = tr5.getTransformacjaOdwrotna();
            System.out.println(trr5);

            Punkt p3 = trr5.transformuj(p2);
            System.out.println(p3);
        }
        catch(BrakTransformacjiOdwrotnejException | BrakTransformacjiOdbicia ex)
        {
            ex.printStackTrace();
        }
        System.out.println();


        //ODBICIE OX
//        try {
//            Punkt p1 = new Punkt(3, 4);
//            System.out.println(p1);
//            Transformacja tr = new OdbicieX();
//            System.out.println(tr);
//            Punkt p2 = tr.transformuj(p1);
//            System.out.println(p2);
//            Transformacja trr = tr.getTransformacjaOdwrotna();
//            System.out.println(trr);
//            Punkt p3 = trr.transformuj(p2);
//            System.out.println(p3);
//
//            Punkt p4 = new Punkt(5, 0);
//            System.out.println(p4);
//            Punkt p5 = tr.transformuj(p4);
//            System.out.println(p5);
//        } catch (BrakTransformacjiOdwrotnejException | BrakTransformacjiOdbicia ex) {
//            ex.printStackTrace();
//        }
//        System.out.println();
//
//
//        //ODBICIE OY
//        try {
//            Punkt p1 = new Punkt(3, 4);
//            System.out.println(p1);
//            Transformacja tr = new OdbicieY();
//            System.out.println(tr);
//            Punkt p2 = tr.transformuj(p1);
//            System.out.println(p2);
//            Transformacja trr = tr.getTransformacjaOdwrotna();
//            System.out.println(trr);
//            Punkt p3 = trr.transformuj(p2);
//            System.out.println(p3);
//
//            Punkt p4 = new Punkt(0, 7);
//            System.out.println(p4);
//            Punkt p5 = tr.transformuj(p4);
//            System.out.println(p5);
//        } catch (BrakTransformacjiOdwrotnejException | BrakTransformacjiOdbicia ex) {
//            ex.printStackTrace();
//        }
//        System.out.println();
    }
}