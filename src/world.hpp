#pragma once
#include "primitives.hpp"
namespace noether 
{
	struct World 
	{
	private:
		std::vector<Object&> objects;
		Vector3 gravity = Vector3(0, -9.8, 0);

	public:
	    void add_object(Object& object);
		void remove_object(Object& object);
		void update(float dt);
	};
}