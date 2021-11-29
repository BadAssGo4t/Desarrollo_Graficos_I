#include "Material.h"
#include <iostream>

Material::Material()
{
	std::cout << "Init Material" << std::endl;
}

Material::~Material()
{
	std::cout << "Destroy Material" << std::endl;
}