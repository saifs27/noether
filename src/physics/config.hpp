#include <vector>
#include "primitives.hpp"

namespace noether {

    struct Force {
        float x;
        float y;
        float z;
    };

    class ObjectConfig {
        bool is_uniform_mass = true; // uniformly distributed mass
        

    };

    class WorldConfig {
        int n_objects;
        bool is3D = true;
        
    };

}