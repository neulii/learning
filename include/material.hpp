#ifndef MATERIAL_HPP
#define MATERIAL_HPP

#include <string>


class Material
{
	private:

		std::string materialName;

	public:
		Material(std::string materialName);
	
		void printToConsole();
		void changeMaterialName(std::string newName);

};



#endif
