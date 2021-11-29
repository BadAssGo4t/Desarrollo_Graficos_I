#pragma once
#include "Entity/Entity2D/Entity2D.h"
#include "2DUtils/TextureImporter/TextureImporter.h"

class TileMap : public Entity2D
{
public:
	TileMap(CollisionManager* collisionManager, Material* material, Renderer* renderer);
	~TileMap();
	void GetTexture(TextureImporter* importer);
private:
};