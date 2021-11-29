#include "Sprite.h"
#include <iostream>

Sprite::Sprite(Animation* animation, CollisionManager* collisionManager, Material* material, Renderer* renderer) 
	: Entity2D(collisionManager, material, renderer)
{
	std::cout << "Init Sprite" << std::endl;
	this->animation = animation;
}

Sprite::~Sprite()
{
	std::cout << "Destroy Sprite" << std::endl;
}