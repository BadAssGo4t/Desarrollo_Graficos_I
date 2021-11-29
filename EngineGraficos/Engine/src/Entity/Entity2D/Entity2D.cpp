#include "Entity2D.h"
#include <iostream>

Entity2D::Entity2D(CollisionManager* collisionManager, Material* material, Renderer* renderer) 
	: Entity(renderer)
{
	this->collisionManager = collisionManager;
	this->material = material;
	std::cout << "Init Entity2D" << std::endl;
}

Entity2D::~Entity2D()
{
	std::cout << "Destroy Entity2D" << std::endl;
}