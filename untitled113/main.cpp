#include <iostream>
using namespace std;

class Book {
public:

    string title;
    string author;
    int year;

    Book(string t, string a, int y);
};

Book::Book(string t, string a, int y) {
    title = t;
    author = a;
    year = y;
}


void printBookInfo(const Book &book) {
    cout << "Title: [" << book.title << "]\nAuthor: ["<<book.author<<"]\nYear: ["<<book.year<<"]\n";
}

int main() {
    Book book1("1984","George Orwell",1949);
    Book book2("To Kill a Mockingbird","Harper Lee",1960);
    printBookInfo(book1);
    printBookInfo(book2);


    return 0;
}
