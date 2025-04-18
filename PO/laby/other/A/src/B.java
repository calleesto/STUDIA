public class B {
    private double liczba;
    public B(double liczba) {
        this.liczba = liczba;
    }
    public double getLiczba() {
        return liczba;
    }
    public void setLiczba(double liczba) {
        this.liczba = liczba;
    }
    @Override
    public String toString() {
        return "Instancja klasy B zawierająca liczbę " + liczba;
    }
    @Override
    public boolean equals(Object obj) {
        if(obj instanceof B)
        {
            B other = (B)obj;
            return liczba == other.liczba;
        }
        return false;
    }
    @Override
    public int hashCode() {
        return 59 * Double.hashCode(liczba) + 7;
    }
}
