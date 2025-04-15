#include "Book.h"

// Konstruktor bezparametrowy
Book::Book() : author(""), title("") {}

// Konstruktor, który przyjmuje autora i tytuł jako stałe l-referencje
Book::Book(const std::string& author, const std::string& title)
    : author(author), title(title) {}

// Konstruktor, który przyjmuje autora i tytuł jako r-referencje
Book::Book(std::string&& author, std::string&& title)
    : author(std::move(author)), title(std::move(title)) {}

// Konstruktor kopiujący
Book::Book(const Book& other) : author(other.author), title(other.title) {}

// Konstruktor przenoszący
Book::Book(Book&& other) noexcept
    : author(std::move(other.author)), title(std::move(other.title)) {
    other.author = "";
    other.title = ""; // Pozostaw obiekt w ważnym stanie
}

// Gettery
const std::string& Book::GetAuthor() const { return author; }
const std::string& Book::GetTitle() const { return title; }

// Settery l-referencja
void Book::SetAuthor(const std::string& a) { author = a; }
void Book::SetTitle(const std::string& t) { title = t; }

// Settery r-referencja
void Book::SetAuthor(std::string&& a) { author = std::move(a); }
void Book::SetTitle(std::string&& t) { title = std::move(t); }

// Operator << wypisania na strumień std::ostream
std::ostream& operator<<(std::ostream& os, const Book& b) {
    os << "Author: " << b.author << ", Title: " << b.title;
    return os;
}

// Kopiujący operator przypisania
Book& Book::operator=(const Book& other) {
    if (this != &other) {
        author = other.author;
        title = other.title;
    }
    return *this;
}

// Przenoszący operator przypisania
Book& Book::operator=(Book&& other) noexcept {
    if (this != &other) {
        author = std::move(other.author);
        title = std::move(other.title);
        other.author = "";
        other.title = "";
    }
    return *this;
}