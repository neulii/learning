#ifndef MATERIAL_HPP
#define MATERIAL_HPP

#include <string>


class Material
{
	private:

		std::string materialName;
		int materialID;


	public:
		Material(std::string materialName, int materialID);
	
		void printToConsole();
		void changeMaterialName(std::string newName);

};



#endif
