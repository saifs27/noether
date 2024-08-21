#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

namespace noether {

class Window {
public:
    Window(int width, int height, std::string name);
    ~Window();
    bool should_close() { return glfwWindowShouldClose(window); }

private:
    void init_window();
    const int width;
    const int height;
    std::string window_name;
    
    GLFWwindow* window;
};




} // namespace noether