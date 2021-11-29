#include "TileMap.h"
#include <iostream>

TileMap::TileMap(CollisionManager* collisionManager, Material* material, Renderer* renderer)
	: Entity2D(collisionManager, material, renderer)
{
	std::cout << "Init TileMap" << std::endl;
}

void TileMap::GetTexture(TextureImporter* importer)
{
	(*importer).GetTexture;
	std::cout << "Tilemap got Texture" << std::endl;
}

TileMap::~TileMap()
{
	std::cout << "Destroy TileMap" << std::endl;
}