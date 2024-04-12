#include "world.hpp"
namespace noether
{ 

	void World::update(float dt)
	{
		for (Object obj : objects)
		{
			obj.force += obj.mass;

		}
	}

}