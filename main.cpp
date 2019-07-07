#include <iostream>
#include "Zoo.h"
#include "Turtle.h"

int main() {
    //std::vector<std::unique_ptr<Animal>> animalsWithUniquePtrs;
    Zoo myZoo = Zoo(3, 2);
    myZoo.action();



    return 0;
}