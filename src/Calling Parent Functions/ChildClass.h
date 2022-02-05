#pragma once
#include "ParentClass.h"
#include "ParentClass2.h"

namespace ShahJugalR {

	class ChildClass : public ParentClass, public ParentClass2
	{
	public:
		ChildClass();
		~ChildClass();

	public:

		void Function();

	};


}
