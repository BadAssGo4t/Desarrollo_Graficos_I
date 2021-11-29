#pragma once
#include "BaseClasses/Renderer.h"

class Entity
{
public:
	Entity(Renderer* renderer);
	~Entity();
private:
	Renderer* renderer;
};