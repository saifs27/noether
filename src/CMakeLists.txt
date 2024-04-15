# CMakeList.txt : CMake project for physics_engine, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (${PROJECT_NAME}  "main.cpp" "physics/collisions.cpp" "physics/primitives.cpp" "physics/world.cpp" "render/object.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET ${PROJECT_NAME}  PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
target_include_directories(${PROJECT_NAME}  PRIVATE src)



target_link_libraries(${PROJECT_NAME} PRIVATE Vulkan::Vulkan glm::glm glfw ${GLFW_LIBRARIES})