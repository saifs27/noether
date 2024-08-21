#pragma once
#include "primitives.hpp"
#include "object.hpp"
namespace noether 
{
    struct World 
    {
    private:
        std::vector<Object> objects;
        std::vector<Vector3> forces;

    public:
        void add_object(Object object);
        void remove_object(Object object);
        void update(float dt);
    };
}