#ifndef LIBRARY_H
#define LIBRARY_H

#include <initializer_list>
#include <string>
#include <iostream>
#include "Book.h"

class Library {
private:
    Book* books;
    std::size_t size;

public:
    // Konstruktor bezparametrowy
    Library();

    // Konstruktor z listą inicjalizacyjną
    Library(std::initializer_list<Book> list);

    // Konstruktor z określoną pojemnością
    explicit Library(std::size_t capacity);

    // Konstruktor kopiujący
    Library(const Library& orig);

    // Konstruktor przenoszący
    Library(Library&& orig) noexcept;

    // Kopiujący operator przypisania
    Library& operator=(const Library& right);

    // Przenoszący operator przypisania
    Library& operator=(Library&& right) noexcept;

    // Dostęp do elementów
    Book& operator[](std::size_t index);
    const Book& operator[](std::size_t index) const;

    // Wypisywanie i rozmiar
    std::size_t GetSize() const;

    // Operator << wypisania na strumień std::ostream
    friend std::ostream& operator<<(std::ostream& os, const Library& lib);

    // Destruktor
    ~Library();
};

#endif // LIBRARY_H