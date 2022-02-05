#include "ChildClass.h"

ShahJugalR::ChildClass::ChildClass()
{

}

ShahJugalR::ChildClass::~ChildClass()
{

}

void ShahJugalR::ChildClass::Function()
{
	ShahJugalR::ParentClass::Function();
	ShahJugalR::ParentClass2::Function();
	std::cout << "Child class's Function" << std::endl;
}
