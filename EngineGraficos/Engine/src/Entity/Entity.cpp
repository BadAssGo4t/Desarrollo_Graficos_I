#include "Entity.h"
#include <iostream>

Entity::Entity(Renderer* renderer)
{
	this->renderer = renderer;
	std::cout << "Init Entity" << std::endl;
}	


Entity::~Entity()
{
	std::cout << "Destroy Entity" << std::endl;

}
