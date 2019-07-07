//
// Created by Andy on 06/07/2019.
//

#ifndef ZOOO_TURTLE_H
#define ZOOO_TURTLE_H


#include "Animal.h"

class Turtle final : public Animal {
public:
    void Eat() override final;
    void Run() override final;
    void Roar() override final;
    void Swim() override final;

    ~Turtle() override final;
};


#endif //ZOOO_TURTLE_H
