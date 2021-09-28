#include "../include/material.hpp"
#include <string>
#include <iostream>

Material::Material(std::string materialName)
{
	this->materialName = materialName;


}

void Material::printToConsole()
{
	std::cout << "======Material=======" << std::endl;

	std::cout << "Materialname: " << this->materialName << std::endl;

}	

void Material::changeMaterialName(std::string newName)
{
	this->materialName = newName;
}
