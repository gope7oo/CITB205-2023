#include "textprinter.h"

void TextPrinter(std::ostream &out; Invoice invoice) {
    out << invoice.subtotal() << std::endl;
}