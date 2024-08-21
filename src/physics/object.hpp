#include "primitives.hpp"

namespace noether {

struct Object
{
    Vector3 position;
    Vector3 velocity;
    float mass;

    void apply_force(Vector3 force, float dt);
};



}
