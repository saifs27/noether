#include "app.hpp"

namespace noether {

void App::run() {
	while (!window.should_close()) {
		glfwPollEvents();
	}
}

} // namespace noether