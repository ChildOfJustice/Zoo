#include <ctime>
#include "Zoo.h"
#include "Lion.h"
#include "Elephant.h"
#include "Turtle.h"

Zoo::Zoo(int _sizeForUniquePtr, int _size) : size{ _size }, sizeForUnique{ _sizeForUniquePtr } {
	srand(time(NULL));

	animals = new Animal*[size];

	std::cout << "Creating arrays" << std::endl;
	for (int index = 0; index < sizeForUnique; index++) {
		if (rand() % 100 > 40) {
			std::cout << "Lion created" << std::endl;
			animals[index] = new Lion();
			animalsWithUnique.push_back(std::unique_ptr<Animal>(new Lion()));
		}
		else if (rand() % 100 < 80) {
			std::cout << "Elephant created" << std::endl;
			animals[index] = new Elephant();
			animalsWithUnique.push_back(std::unique_ptr<Animal>(new Elephant()));
		}
		else {
			std::cout << "Turtle created" << std::endl;
			animals[index] = new Turtle();
			animalsWithUnique.push_back(std::unique_ptr<Animal>(new Turtle()));
		}
	}

	for (int index = 0; index < size; index++) {
		if (rand() % 100 > 40) {
			std::cout << "Lion created" << std::endl;
			animals[index] = new Lion();
		}
		else if (rand() % 100 < 80) {
			std::cout << "Elephant created" << std::endl;
			animals[index] = new Elephant();
		}
		else {
			std::cout << "Turtle created" << std::endl;
			animals[index] = new Turtle();
		}
	}
}

void Zoo::action() {
	std::cout << ">>ACTION<<" << std::endl;
	std::cout << "Unique:" << std::endl;
	for (const auto& animal : animalsWithUnique)
	{
		animal->Roar();
		animal->Run();
		animal->Eat();
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
	
	std::cout << "Deleting unique array..." << std::endl;
}
