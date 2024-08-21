#include "window.hpp"

namespace noether {

Window::Window(int width, int height, std::string name) : width(width), height(height), window_name(name) {
    init_window();
}

Window::~Window() {
    glfwDestroyWindow(window);
    glfwTerminate();
}

void Window::init_window() {
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    window = glfwCreateWindow(width, height, window_name.c_str(), nullptr, nullptr);

}

}