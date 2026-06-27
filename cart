#include <iostream>
#include "Cart.h"

void Cart::addItem(Product p, int qty) {
    items.push_back(CartItem(p, qty));
}

void Cart::removeItem(int index) {
    if (index >= 0 && index < (int)items.size()) {
        items.erase(items.begin() + index);
    }
}

void Cart::showCart() {
    for (size_t i = 0; i < items.size(); i++) {
        cout << i + 1 << ". "
             << items[i].getProduct().getName()
             << " | Qty: " << items[i].getQuantity()
             << " | Total: " << items[i].getTotal()
             << endl;
    }
}

double Cart::getTotal() {
    double total = 0;
    for (size_t i = 0; i < items.size(); i++) {
        total += items[i].getTotal();
    }
    return total;
}

vector<CartItem> Cart::getItems() {
    return items;
}
