#include "Shape.h"
#include <iostream>

Shape::Shape(CollisionManager* collisionManager, Material* material, Renderer* renderer)
	: Entity2D(collisionManager, material, renderer)
{
	std::cout << "Init Shape" << std::endl;
}

Shape::~Shape()
{
	std::cout << "Destroy Shape" << std::endl;
}