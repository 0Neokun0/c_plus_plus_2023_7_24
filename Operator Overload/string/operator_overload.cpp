// Mystring - starting point
#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    Mystring empty; // no-args constructor
    Mystring larry("Larry");
    Mystring stooge{larry};

    empty.display();
    larry.display();
    stooge.display();

    return 0;
}