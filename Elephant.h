//
// Created by Andy on 06/07/2019.
//

#ifndef ZOOO_ELEPHANT_H
#define ZOOO_ELEPHANT_H

#include "Animal.h"

class Elephant final : public Animal {
public:
    void Eat() override final;
    void Run() override final;
    void Roar() override final;

    ~Elephant() override final;
};


#endif //ZOOO_ELEPHANT_H
