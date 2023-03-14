#ifndef LAB1_ITEM_H
#define LAB1_ITEM_H


#include "product.h"

class Item {
private:
    int qty;
    Product product;
public:
    Item(Product product, int qty);
    double total();
};


#endif //LAB1_ITEM_H
