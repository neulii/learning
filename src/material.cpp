#include "../include/material.hpp"
#include <string>
#include <iostream>

Material::Material(std::string materialName, int materialID)
{
	this->materialName = materialName;
	this->materialID = materialID;


}

void Material::printToConsole()
{
	std::cout << "======Material=======" << std::endl;

	std::cout << "Materialname: " << this->materialName << std::endl;
	std::cout << "Material ID : " << this->materialID << std::endl;
	

}	

void Material::changeMaterialName(std::string newName)
{
	this->materialName = newName;
}
