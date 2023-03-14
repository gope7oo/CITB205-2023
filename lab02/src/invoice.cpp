#include "invoice.h"

void Invoice::add(Product product, int qty) {
}

double Invoice::subtotal(){
    double s = 0;
    for (auto item:items) {
        s = s + item.total();
    }
    return s;
}

