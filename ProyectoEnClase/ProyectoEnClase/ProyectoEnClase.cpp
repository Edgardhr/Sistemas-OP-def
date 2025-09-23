#include <iostream>
#include <string>
#include "utils/ConsoleControler.h"
#include <functional>
#include <list>

typedef std::function<int(int, int)> SumaFunction;
typedef std::function<std::list<std::list<int>>> Test;
void TestLambdasMolonas(std::function<void()> funcionMolona)
{
	std::cout << "Voy a ejecutar una funcion que estaba en una variable" << std::endl;

	funcionMolona();

	std::cout << "Ya la he ejecutado" << std::endl;
}
int main()
{
	std::string name = "Pepe";
	std::list<std::list<int>> listaDeListas;
	std::function<char()> funcionQueHaceCosasPeroEsUnaVariable = [name](){
		
		std::cout << "Esto no es como pero funciona y devuelve el nombre --> " << name <<std::endl;
		return 54;
		};
	TestLambdasMolonas(funcionQueHaceCosasPeroEsUnaVariable);
}

