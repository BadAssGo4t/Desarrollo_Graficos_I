#pragma once
#include "Entity/Entity2D/Entity2D.h"

class Shape : Entity2D
{
public:
	Shape(CollisionManager* collisionManager, Material* material, Renderer* renderer);
	~Shape();
private:
};