#include <iostream>
#include "Book.h"
#include "Library.h"

int main() {
    // CLASS: BOOK, IMPLEMENTATION
    Book e;
    std::cout << "e: " << e << std::endl;

    Book b1("George Orwell", "1984");
    std::cout << "b1: " << b1 << std::endl;

    Book b2("J.K. Rowling", "Harry Potter and the Philosopher's Stone");
    std::cout << "b2: " << b2 << std::endl;

    // konstruktor kopiujacy
    Book b3 = b1;
    std::cout << "b3: " << b3 << " b1: " << b1 << std::endl;

    // konstruktor przenoszacy
    e = std::move(b2);
    std::cout << "e: " << e << " b2: " << b2 << std::endl;

    // uzycie setters
    e.SetAuthor("Leo Tolstoy");
    std::cout << "e: " << e << std::endl;

    e.SetTitle("War and Peace");
    std::cout << "e: " << e << std::endl;

    std::cout << std::endl << std::endl << std::endl;

    // CLASS: LIBRARY, IMPLEMENTATION
    Library libEmpty;
    std::cout << "libEmpty: " << libEmpty << std::endl;

    Library lib1 = {
        {"J.R.R. Tolkien", "The Hobbit"},
        {"Aldous Huxley", "Brave New World"},
        {"F. Scott Fitzgerald", "The Great Gatsby"}
    };

    std::cout << "lib1: " << lib1 << std::endl;

    Library lib2(2);
    std::cout << "lib2: " << lib2 << std::endl;

    lib2[0] = { "Fyodor Dostoevsky", "Crime and Punishment" };
    lib2[1] = { "Harper Lee", "To Kill a Mockingbird" };

    std::cout << "lib2: " << lib2 << std::endl;

    libEmpty = std::move(lib2);
    std::cout << "libEmpty: " << libEmpty << " lib2: " << lib2 << std::endl;

    lib1[0] = std::move(libEmpty[1]);
    std::cout << "lib1: " << lib1 << " libEmpty: " << libEmpty << std::endl;

    return 0;
}