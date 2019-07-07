//
// Created by Andy on 06/07/2019.
//

#ifndef ZOOO_LION_H
#define ZOOO_LION_H


#include "Animal.h"

class Lion final : public Animal {
public:
    void Eat() override final;
    void Run() override final;
    void Roar() override final;

    ~Lion() override final;
};


#endif //ZOOO_LION_H
