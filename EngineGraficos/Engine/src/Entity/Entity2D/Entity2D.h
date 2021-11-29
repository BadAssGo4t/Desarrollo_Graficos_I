#pragma once
#include "Entity/Entity.h"
#include "BaseClasses/CollisionManager.h"
#include "2DUtils/Material/Material.h"

class Entity2D : public Entity
{
public:
	Entity2D(CollisionManager* collisionManager, Material* material, Renderer* renderer);
	~Entity2D();
private:
	CollisionManager* collisionManager;
	Material* material;
};