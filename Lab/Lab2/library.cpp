#include "library.h"

Book::Book(const char* name, const char* author, int publishYear) {
    // TODO 1: Book constructor
    this->name = new char[strlen(name) + 1];
    this->author = new char[strlen(author) + 1];
    strcpy(this->name, name);
    strcpy(this->author, author);
    this->publishYear = publishYear;
}

Book::~Book() {
    // TODO 2: Book destructor
    delete []name;
    delete []author;
}

Bookcase::Bookcase(int capacity) : capacity(capacity) {
    // TODO 3: Bookcase constructor
    // Initialize books to an array of length 'capacity', and numBooks to 0.
    // Hint: how to initialize constant data member capacity?
    books = new Book *[capacity];
    for (int i = 0; i < capacity; i++) {
        books[i] = nullptr;
    }

    numBooks = 0;
}

Bookcase::~Bookcase() {
    // TODO 4: Bookcase destructor

    for (int i = 0; i < numBooks; i++)
        delete books[i];
    delete []books;

}

void Bookcase::addBook(const char* name, const char* author, int publishYear) {
    if (numBooks >= capacity) { // TODO 5.1: full condition
        cout << "Bookcase is full, cannot add " << name << "!" << endl;
        return;
    }

    // TODO 5.2: add a new Book to the books array at index numBooks, then increment numBooks.
    books[numBooks] = new Book(name, author, publishYear);
    numBooks++;

}

Library::Library(int sciCapacity, int hmnCapacity, int miscCapacity)
    : bookcases{Bookcase(sciCapacity),
                Bookcase(hmnCapacity),
                Bookcase(miscCapacity)} {
    // TODO 6: Library constructor
    // Hint: Bookcase has no default constructor. How to initialize bookcases?
//    bookcases[SCIENCE] = Bookcase(sciCapacity);
//    bookcases[HUMANITIES] = Bookcase(hmnCapacity);
//    bookcases[MISC] = Bookcase(miscCapacity);

}


Library::~Library() {
    // TODO 7: Library destructor
    // Hint: Anything to delete?
}
