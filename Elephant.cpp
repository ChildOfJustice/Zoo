//
// Created by Andy on 06/07/2019.
//
#include <iostream>

#include "Elephant.h"

void Elephant::Roar(){
    std::cout<<"Elephant: \"trumpeting...\""  << std::endl;
}
void Elephant::Eat(){
    std::cout<<"Elephant: \"eating...\""<<std::endl;
}
void Elephant::Run(){
    std::cout<<"Elephant: \"running...\""<<std::endl;
}
Elephant::~Elephant() {
    std::cout << "Elephant: \"I go to sleep\""<<std::endl;
}