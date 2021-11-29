#pragma once
#include "Entity/Entity2D/Entity2D.h"
#include "2DUtils/Animation/Animation.h"

class Sprite : Entity2D
{
public:
	Sprite(Animation* animation, CollisionManager* collisionManager, Material* material, Renderer* renderer);
	~Sprite();
private:
	Animation* animation;
};