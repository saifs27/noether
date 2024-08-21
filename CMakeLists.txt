cmake_minimum_required (VERSION 3.20)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

set(CMAKE_TOOLCHAIN_FILE "${VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake" CACHE STRING "") 

project ("noether")

# Vulkan SDK
if (DEFINED VULKAN_SDK_PATH)
	set(Vulkan_INCLUDE_RIDS "${VULKAN_SDK_PATH}/Include")
	set(Vulkan_LIBRARIES "${VULKAN_SDK_PATH}/Lib")
	set(Vulkan_FOUND "True")

else()
	find_package(Vulkan REQUIRED)
	if(NOT VULKAN_FOUND)
		message(FATAL_ERROR "Vulkan SDK not installed")
	endif()
endif()

# Fetch GLM Library
include(FetchContent)
FetchContent_Declare(
	glm
	GIT_REPOSITORY	https://github.com/g-truc/glm.git
	GIT_TAG 	bf71a834948186f4097caa076cd2663c69a10e1e #refs/tags/1.0.1
)

FetchContent_MakeAvailable(glm)

# Fetch GLFW
FetchContent_Declare(
	glfw
	GIT_REPOSITORY https://github.com/glfw/glfw
)
FetchContent_MakeAvailable(glfw)

find_package(imgui CONFIG REQUIRED)

# Include sub-projects.

add_subdirectory ("src")







