#include "world.hpp"
namespace noether
{ 

    void World::update(float dt)
    {
        for (Object obj : objects)
        {
            obj.force += obj.mass * gravity;
            obj.velocity += obj.force / obj.mass * dt;
            obj.position += obj.velocity * dt;

            obj.force = Vector3(0, 0, 0);

        }
    }

    void World::add_object(Object& object)
    {
        objects.push_back(object);
    }

    void World::remove_object(Object& object)
    {
        if (!object) return;
        auto it = std::find(objects.begin(), objects.end(), object);
        if (it == objects.end()) return;
        objects.erase(it);
    }


}