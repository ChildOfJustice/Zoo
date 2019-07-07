//
// Created by Andy on 06/07/2019.
//
#include <iostream>

#include "Turtle.h"

void Turtle::Roar(){
    std::cout<<"Turtle: \"NO COMMENTS\""  << std::endl;
}
void Turtle::Eat(){
    std::cout<<"Turtle: \"eating...\""<<std::endl;
}
void Turtle::Run(){
    std::cout<<"Turtle: \"running?\""<<std::endl;
}
void Turtle::Swim() {
    std::cout<<"Turtle: \"swimming!!!\""<<std::endl;
}
Turtle::~Turtle() {
    std::cout << "Turtle: \"I go to sleep\""<<std::endl;
}