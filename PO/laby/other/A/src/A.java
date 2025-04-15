public class A {
    private int liczba;

    //konstruktor
    public A(int liczba) {
        this.liczba = liczba;
    }

    public void setLiczba(int liczba) {
        this.liczba = liczba;
    }

    public int getLiczba() {
        return liczba;
    }

    @Override
    public String toString() {
        return "Instancja klasy A zawierająca liczbę " + liczba;
    }

    // Add a main method to make the class runnable
    public static void main(String[] args) {
        A a = new A(5); // Create an instance of A with a number
        System.out.println(a); // This will call the toString method and print the result
    }
}
