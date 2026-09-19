#ifndef READER_H
#define READER_H

#include <string>
#include <vector>

class Reader {
private:
    std::string name;           // 姓名
    std::string userId;         // 学号/工号
    std::string type;           // 类型："学生" 或 "教师"
    std::string department;     // 院系
    int maxBorrowLimit;         // 最大可借数量
    std::vector<std::string> borrowedBooks;  // 已借图书条码号列表

public:
    // 构造函数
    Reader(std::string n, std::string id, std::string t,
        std::string d, int limit);

    // ===== Getter =====
    std::string getName() const;
    std::string getUserId() const;
    std::string getType() const;
    std::string getDepartment() const;
    int getMaxBorrowLimit() const;
    std::vector<std::string> getBorrowedBooks() const;
    int getBorrowedCount() const;  // 当前已借数量

    // ===== Setter =====
    void setName(std::string n);
    void setDepartment(std::string d);

    // ===== 业务方法 =====
    void addBorrowedBook(std::string barcode);
    void removeBorrowedBook(std::string barcode);
    bool hasBook(std::string barcode) const;
    bool canBorrowMore();  // 是否还能继续借书
    void displayInfo() const;
};

#endif
