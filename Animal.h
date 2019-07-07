//
// Created by Andy on 06/07/2019.
//

#ifndef ZOOO_ANIMAL_H
#define ZOOO_ANIMAL_H


class Animal {
public :
    virtual void Eat() = 0;
    virtual void Run() = 0;
    virtual void Roar() = 0;
    virtual void Swim();

    virtual ~Animal();
};


#endif //ZOOO_ANIMAL_H
