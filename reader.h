#ifndef READER_H
#define READER_H

#include <string>
#include <vector>

class Book;   // 前置声明：只告诉编译器"Book 是一个类"，不包含 book.h

class Reader {
private:
    std::string name;
    std::string userId;
    std::string type;
    std::string department;
    int maxBorrowLimit;
    std::vector<Book*> borrowedBooks;   // 直接持有已借书籍的指针

public:
    Reader(std::string n, std::string id, std::string t,
        std::string d, int limit);

    // Getter
    std::string getName() const;
    std::string getUserId() const;
    std::string getType() const;
    std::string getDepartment() const;
    int getMaxBorrowLimit() const;
    std::vector<Book*> getBorrowedBooks() const;
    int getBorrowedCount() const;

    // Setter
    void setName(std::string n);
    void setDepartment(std::string d);

    // 借还书：由读者自己执行（内部检查上限和书的状态）
    bool borrowBook(Book* b, int borrowDays);
    bool returnBook(Book* b);
    bool hasBook(Book* b) const;
    bool canBorrowMore() const;
    void displayInfo() const;
};

#endif
