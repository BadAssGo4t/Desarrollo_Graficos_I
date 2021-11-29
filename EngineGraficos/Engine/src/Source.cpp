#include "BaseClasses/Engine.h"
#include <iostream>
#include "Entity/Entity2D/Sprite/Sprite.h"
#include "Entity/Entity2D/Shape/Shape.h"
#include "Entity/Entity2D/TileMap/TileMap.h"
#include "2DUtils/TextureImporter/TextureImporter.h"

void main()
{
	std::cout << "Init All" << std::endl;

	//Start Engine
	Engine* engine = new Engine();

	//Start Material
	Material* mat = new Material();

	//Start Sprite
	Animation* anim = new Animation();
	Sprite* sprite = new Sprite(anim, engine->GetColManager(), mat, engine->GetRenderer());

	//Start Shape
	Shape* shape = new Shape(engine->GetColManager(), mat, engine->GetRenderer());

	//Start Tilemap
	TextureImporter* texImporter = new TextureImporter();
	TileMap* tileMap = new TileMap(engine->GetColManager(), mat, engine->GetRenderer());

	std::cout << std::endl;
	tileMap->GetTexture(texImporter);
	std::cout << std::endl;
	
	std::cout << "Delete All" << std::endl;

	//Delete all
	delete tileMap;
	delete texImporter;
	delete shape;
	delete sprite;
	delete anim;
	delete mat;
	delete engine;
}