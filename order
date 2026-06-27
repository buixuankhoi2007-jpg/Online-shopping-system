#include <iostream>
#include "Order.h"

void Order::createFromCart(Cart& cart) {
    vector<CartItem> cartItems = cart.getItems();

    for (size_t i = 0; i < cartItems.size(); i++) {
        items.push_back(OrderItem(
            cartItems[i].getProduct(),
            cartItems[i].getQuantity()
        ));
    }
}

void Order::showOrder() {
    cout << "===== ORDER =====" << endl;
    for (size_t i = 0; i < items.size(); i++) {
        cout << i + 1 << ". "
             << items[i].getProduct().getName()
             << " | Qty: " << items[i].getQuantity()
             << " | Total: " << items[i].getTotal()
             << endl;
    }
    cout << "Total Order: " << getTotal() << endl;
}

double Order::getTotal() {
    double total = 0;
    for (size_t i = 0; i < items.size(); i++) {
        total += items[i].getTotal();
    }
    return total;
}
