#include "object.hpp"

namespace noether {
    void Object::apply_force(Vector3 force, float dt) {
        auto acceleration = force * (1/mass);
        velocity = velocity + acceleration * dt;
        position = position + velocity * dt;
    }

}