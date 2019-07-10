
#ifndef ZOOO_ZOO_H
#define ZOOO_ZOO_H


#include <vector>
#include <memory>
#include <iostream>

#include "Animal.h"

class Zoo {
private:
	int sizeForUnique;
	int size;
	std::vector<std::unique_ptr<Animal>> animalsWithUnique;
	Animal** animals;

public:
	Zoo(int sizeForUniquePtrs, int _size);

	void action();

	~Zoo();
};


#endif //ZOOO_ZOO_H

