#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <ctime>

class Book {
private:
    std::string barcode;      // 图书条码号
    std::string isbn;        // ISBN编号
    std::string title;       // 书名
    std::string author;       // 作者
    std::string publisher;   // 出版社
    std::string category;     // 分类
    bool isBorrowed;         // 是否被借出
    std::string borrowerId;   // 借阅者ID
    time_t borrowDate;       // 借书日期
    time_t dueDate;          // 应还日期

public:
    // 构造函数
    Book(std::string bc, std::string i, std::string t,
        std::string a, std::string p, std::string c);

    // ===== Getter =====
    std::string getBarcode() const;
    std::string getIsbn() const;
    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getPublisher() const;
    std::string getCategory() const;
    bool getIsBorrowed() const;
    std::string getBorrowerId() const;
    time_t getBorrowDate() const;
    time_t getDueDate() const;

    // ===== Setter（修改信息）=====
    void setTitle(std::string t);
    void setAuthor(std::string a);
    void setPublisher(std::string p);
    void setCategory(std::string c);

    // ===== 业务方法 =====
    void borrowBook(std::string readerId, int borrowDays);  // 借书，借N天
    void returnBook();                                       // 还书
    int calculateOverdueDays();                              // 计算逾期天数
    void displayInfo() const;                                // 显示完整信息
};

#endif
