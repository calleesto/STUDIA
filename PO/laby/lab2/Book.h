#ifndef BOOK_H
#define BOOK_H

#include <initializer_list>
#include <string>
#include <iostream>

class Book {
private:
    std::string author, title;

public:
    // Konstruktor bezparametrowy
    Book();

    // Konstruktor, który przyjmuje autora i tytuł jako stałe l-referencje
    Book(const std::string& author, const std::string& title);

    // Konstruktor, który przyjmuje autora i tytuł jako r-referencje
    Book(std::string&& author, std::string&& title);

    // Konstruktor kopiujący
    Book(const Book& other);

    // Konstruktor przenoszący
    Book(Book&& other) noexcept;

    // Gettery
    const std::string& GetAuthor() const;
    const std::string& GetTitle() const;

    // Settery l-referencja
    void SetAuthor(const std::string& a);
    void SetTitle(const std::string& t);

    // Settery r-referencja
    void SetAuthor(std::string&& a);
    void SetTitle(std::string&& t);

    // Operator << wypisania na strumień std::ostream
    friend std::ostream& operator<<(std::ostream& os, const Book& b);

    // Kopiujący operator przypisania
    Book& operator=(const Book& other);

    // Przenoszący operator przypisania
    Book& operator=(Book&& other) noexcept;
};

#endif // BOOK_H