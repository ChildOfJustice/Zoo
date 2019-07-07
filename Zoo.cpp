//
// Created by Andy on 06/07/2019.
//

#include <ctime>
#include "Zoo.h"
#include "Lion.h"
#include "Elephant.h"
#include "Turtle.h"

Zoo::Zoo(int _sizeForUniquePtrs, int _size) {
    srand(time(NULL));
    sizeForUniquePtrs = _sizeForUniquePtrs;
    size = _size;
    std::cout << "Creating array with unique pointers..." << std::endl;
    for(int index = 0; index < sizeForUniquePtrs; index++){
        if(rand()%100 > 40){
            std::cout << "Lion created" << std::endl;
            animalsWithUniquePtrs->push_back(std::unique_ptr<Animal>(new Lion()));
        }
        else if (rand()%100 < 80){
            std::cout << "Elephant created" << std::endl;
            animalsWithUniquePtrs->push_back(std::unique_ptr<Animal>(new Elephant()));
        } else {
            std::cout << "Turtle created" << std::endl;
            animalsWithUniquePtrs->push_back(std::unique_ptr<Animal>(new Turtle()));
        }
    }
    std::cout << "Creating standard array..." << std::endl;
    animals = new Animal*[size];
    for (int index = 0; index < size; ++index) {
        if(rand()%100 > 40){
            std::cout << "Lion created" << std::endl;
            animals[index] = new Lion();
        }
        else if (rand()%100 < 80){
            std::cout << "Elephant created" << std::endl;
            animals[index] = new Elephant();
        } else {
            std::cout << "Turtle created" << std::endl;
            animals[index] = new Turtle();
        }
    }
}

void Zoo::action() {
    std::cout << ">>ACTION<<" << std::endl;
    std::cout << "Unique:" << std::endl;
    for(const auto& animal : *animalsWithUniquePtrs)
    {
        animal->Roar();
        animal->Run();
        animal->Eat();
        try {
//            if (!dynamic_cast<Turtle>(animal)){
//
//            }
        } catch(int e){
            std::cout << "Error, ;c";
        }
    }
    std::cout << "Standart:" << std::endl;
    for (int index = 0; index < size; ++index) {
        animals[index]->Eat();
        animals[index]->Run();
        animals[index]->Roar();
    }
}

Zoo::~Zoo() {
    std::cout << "Executing Zoo dtor..." << std::endl;
    for (int index = 0; index < size; ++index) {
        delete animals[index];
        std::cout << "Object from standard array deleted" << std::endl;
    }
    delete animals;
    std::cout << "Deleting unique array..." << std::endl;
    delete animalsWithUniquePtrs;
}