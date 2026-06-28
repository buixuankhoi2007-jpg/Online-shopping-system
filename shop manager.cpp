#include <iostream>
#include <vector>
#include <string>

using namespace std;

class User {
protected:
    string username;
    string password;
public:
   User(string u, string p) : username(u), password(p) {}
    string getUsername() { return username; }
    bool checkPassword(string p) { return password == p; }
};

class Customer : public User {
public:
    void login() override { cout << "Customer logged in.\n"; }
};

class Payment {
public:
    virtual void processPayment(double amount) = 0;
};

class CreditCardPayment : public Payment {
public:
    void processPayment(double amount) override {
        cout << "Processing credit card payment of $" << amount << endl;
    }
};

class ShopManager {
private:
    vector<User> userList;
public:
    void handleRegister() {
        string u, p;
        cout << "Nhap username moi: "; cin >> u;
        cout << "Nhap password: "; cin >> p;
        userList.push_back(User(u, p));
        cout << ">>> Dang ky thanh cong!\n";
    }
    void handleLogin() {
        string u, p;
        cout << "Username: "; cin >> u;
        cout << "Password: "; cin >> p;

        for(auto &user : userList) {
            if(user.getUsername() == u && user.checkPassword(p)) {
                cout << ">>> Dang nhap thanh cong! Xin chao " << u << endl;
                return;
            }
        }
        cout << ">>> Sai username hoac password!\n";
    }
    void run() {
        int choice;
        while (true) {
            cout << "\n--- ONLINE SHOPPING SYSTEM ---\n";
            cout << "1. Dang nhap\n2. Dang ky\n3. Xem danh muc\n4. Thoat\nChon: ";
            cin >> choice;

            switch(choice) {
                case 1: handleLogin(); break;
                case 2: handleRegister(); break;
                case 3: cout << "Dang phat trien...\n"; break;
                case 4: return;
                default: cout << "Lua chon khong hop le!\n";
            }
        }
    }
};

int main() {
    ShopManager system;
    system.run();
    return 0;
}
