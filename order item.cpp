#include "OrderItem.h"

OrderItem::OrderItem(Product p, int q) : product(p), quantity(q) {}

double OrderItem::getTotal() {
    return product.getPrice() * quantity;
}

Product OrderItem::getProduct() {
    return product;
}

int OrderItem::getQuantity() {
    return quantity;
}
