#include <iostream>
#include <string>
using namespace std;
class User {
private:
    int id;
    string username;
    string password;
    string email;
public:
    User(int id, string user, string pass, string email)
        : id(id), username(user), password(pass), email(email) {
    }
    virtual ~User() {}
    bool login(string pass) {
        return this->password == pass;
    }
    virtual void displayMenu() = 0;
};
class Customer : public User {
private:
    string shippingAddress;
public:
    Customer(int id, string user, string pass, string email, string address)
        : User(id, user, pass, email), shippingAddress(address) {
    }
    void displayMenu() override {
        cout << "--- MENU KHÃCH HÃNG ---" << endl;
        cout << "1. Xem danh sach san pham" << endl;
        cout << "2. Them vao gio hang" << endl;
        cout << "3. Thanh toan" << endl;
    }
};
class Admin : public User {
public:
    Admin(int id, string user, string pass, string email)
        : User(id, user, pass, email) {
    }
    void displayMenu() override {
        cout << "--- MENU QUáº¢N TRá» VIÃN ---" << endl;
        cout << "1. Them san pham moi" << endl;
        cout << "2. Cap nhat kho hang" << endl;
    }
};
