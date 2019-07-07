//
// Created by Andy on 06/07/2019.
//
#include <iostream>

#include "Lion.h"


void Lion::Roar(){
    std::cout<<"Lion: \"ROAR!!!\""  << std::endl;
}
void Lion::Eat(){
    std::cout<<"Lion: \"eating...\""<<std::endl;
}
void Lion::Run(){
    std::cout<<"Lion: \"running...\""<<std::endl;
}
Lion::~Lion() {
    std::cout << "Lion: \"I go to sleep\""<<std::endl;
}