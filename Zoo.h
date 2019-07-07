//
// Created by Andy on 06/07/2019.
//

#ifndef ZOOO_ZOO_H
#define ZOOO_ZOO_H

#include <iostream>
#include <vector>
#include <memory>
#include "Animal.h"

class Zoo final {
private:
    int sizeForUniquePtrs;
    int size;
    std::vector<std::unique_ptr<Animal>>* animalsWithUniquePtrs = new std::vector<std::unique_ptr<Animal>>;

    Animal** animals;

public:
    explicit Zoo(int sizeForUniquePtrs, int _size);

    void action();

    ~Zoo();
};


#endif //ZOOO_ZOO_H
