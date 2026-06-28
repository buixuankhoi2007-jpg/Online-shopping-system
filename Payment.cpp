#include <iostream>
#include <vector>
#include <string>
using namespace std;

//====================== PAYMENT (ABSTRACT) ======================
class Payment {
protected:
    double amount;

public:
    Payment(double amount) : amount(amount) {}

    virtual void pay() = 0;

    virtual ~Payment() {}
};

//====================== CREDIT CARD ======================
class CreditCardPayment : public Payment {
private:
    string cardNumber;
    string cardHolder;

public:
    CreditCardPayment(double amount, string cardNumber, string cardHolder)
        : Payment(amount), cardNumber(cardNumber), cardHolder(cardHolder) {}

    void pay() override {
        cout << "\n===== CREDIT CARD PAYMENT =====\n";
        cout << "Customer    : " << cardHolder << endl;
        cout << "Card Number : " << cardNumber << endl;
        cout << "Amount      : $" << amount << endl;
        cout << "Status      : Payment Successful!\n";
    }
};

//====================== E-WALLET ======================
class EWalletPayment : public Payment {
private:
    string walletName;
    string customerName;

public:
    EWalletPayment(double amount, string walletName, string customerName)
        : Payment(amount), walletName(walletName), customerName(customerName) {}

    void pay() override {
        cout << "\n===== E-WALLET PAYMENT =====\n";
        cout << "Customer : " << customerName << endl;
        cout << "Wallet   : " << walletName << endl;
        cout << "Amount   : $" << amount << endl;
        cout << "Status   : Payment Successful!\n";
    }
};

//====================== COD ======================
class CODPayment : public Payment {
private:
    string receiverName;

public:
    CODPayment(double amount, string receiverName)
        : Payment(amount), receiverName(receiverName) {}

    void pay() override {
        cout << "\n===== CASH ON DELIVERY =====\n";
        cout << "Customer : " << receiverName << endl;
        cout << "Amount   : $" << amount << endl;
        cout << "Status   : Pay when receiving the package.\n";
    }
};

//====================== MAIN ======================
int main() {

    vector<Payment*> payments;

    // Cristiano Ronaldo thanh toán bằng thẻ tín dụng
    payments.push_back(new CreditCardPayment(
        299.99,
        "1111-2222-3333-4444",
        "Cristiano Ronaldo"
    ));

    // Lionel Messi thanh toán bằng ví điện tử
    payments.push_back(new EWalletPayment(
        159.50,
        "MoMo",
        "Lionel Messi"
    ));

    // Cristiano Ronaldo thanh toán COD
    payments.push_back(new CODPayment(
        89.99,
        "Cristiano Ronaldo"
    ));

    cout << "========== ONLINE SHOPPING SYSTEM ==========\n";

    for (Payment* p : payments)
        p->pay();

    for (Payment* p : payments)
        delete p;

    return 0;
}
