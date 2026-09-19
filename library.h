#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include <vector>
#include "book.h"
#include "reader.h"

class Library {
private:
    std::vector<Book> books;
    std::vector<Reader> readers;

public:
    // ===== 图书管理 =====
    void addBook(const Book& book);
    Book* findBookByBarcode(std::string barcode);  // 按条码号查
    Book* findBookByIsbn(std::string isbn);
    std::vector<Book*> searchBooksByTitle(std::string keyword);  // 按书名搜
    void showAllBooks() const;

    // ===== 读者管理 =====
    void addReader(const Reader& reader);
    Reader* findReaderById(std::string userId);
    void showAllReaders() const;

    // ===== 借书还书 =====
    bool borrowBook(std::string barcode, std::string userId);
    bool returnBook(std::string barcode, std::string userId);

    // ===== 查询逾期罚款 =====
    void showOverdueBooks();  // 显示所有逾期未还的书
    double calculateFine(std::string barcode, std::string userId);  // 计算罚款
};

#endif
