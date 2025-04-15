#include "Library.h"

// Konstruktor bezparametrowy
Library::Library() : books(nullptr), size(0) {}

// Konstruktor z listą inicjalizacyjną
Library::Library(std::initializer_list<Book> list) : size(list.size()) {
    books = new Book[size];
    std::size_t i = 0;
    for (const auto& book : list) {
        books[i++] = book;
    }
}

// Konstruktor z określoną pojemnością
Library::Library(std::size_t capacity) : size(capacity) {
    books = new Book[size];
}

// Konstruktor kopiujący
Library::Library(const Library& orig) : size(orig.size) {
    books = new Book[size];
    for (std::size_t i = 0; i < size; i++) {
        books[i] = orig.books[i];
    }
}

// Konstruktor przenoszący
Library::Library(Library&& orig) noexcept : books(orig.books), size(orig.size) {
    orig.books = nullptr;
    orig.size = 0;
}

// Kopiujący operator przypisania
Library& Library::operator=(const Library& right) {
    if (this != &right) {
        delete[] books;
        size = right.size;
        books = new Book[size];
        for (std::size_t i = 0; i < size; i++) {
            books[i] = right.books[i];
        }
    }
    return *this;
}

// Przenoszący operator przypisania
Library& Library::operator=(Library&& right) noexcept {
    if (this != &right) {
        delete[] books;
        books = right.books;
        size = right.size;
        right.books = nullptr;
        right.size = 0;
    }
    return *this;
}

// Dostęp do elementów
Book& Library::operator[](std::size_t index) {
    return books[index];
}

const Book& Library::operator[](std::size_t index) const {
    return books[index];
}

// Wypisywanie i rozmiar
std::size_t Library::GetSize() const {
    return size;
}

// Operator << wypisania na strumień std::ostream
std::ostream& operator<<(std::ostream& os, const Library& lib) {
    os << "Library: ";
    for (std::size_t i = 0; i < lib.size; i++) {
        os << "[" << i << "] " << lib.books[i] << "; ";
    }
    return os;
}

// Destruktor
Library::~Library() {
    delete[] books;
}