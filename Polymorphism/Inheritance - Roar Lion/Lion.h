// Lion.h

#ifndef LION_H
#define LION_H
#include "Animal.h"

/**********************************************************
Provide the declaration here for the Lion class.
Remember, this is the declaration only.
This file should contain the Lion class and the prototypes for the Lion class' methods
***********************************************************/

// Derived class Lion
class Lion : public Animal {
public:
    std::string get_noise() override;
    int get_num_legs() override;
};

#endif

