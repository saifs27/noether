#include <iostream>
#include <cstdlib>
#include <stdexcept>

#include "window/window.hpp"
#include "window/app.hpp"
//#include "render/object.hpp"

int main() {

    noether::App app{};

    try {
        app.run();
    }

    catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;

}
