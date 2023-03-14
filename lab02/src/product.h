#ifndef LAB1_PRODUCT_H
#define LAB1_PRODUCT_H

#include <string>

using std::string;

class Product {
private:
    string name;
    double price;

public:
    Product(string name, double price);
    double getPrice();
};


#endif //LAB1_PRODUCT_H
