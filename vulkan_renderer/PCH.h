#pragma once

#include <iostream>
#include <fstream>
#include <stdexcept>
#include <algorithm>
#include <chrono>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <cstdint>
#include <array>
#include <optional>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <memory_resource>

//#include <assimp/scene.h>
//#include <assimp/postprocess.h>
//#include <assimp/Importer.hpp>
//#include <assimp/DefaultLogger.hpp>
//#include <assimp/LogStream.hpp>

#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>
#include <assimp/matrix4x4.h>
#include <assimp/cimport.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEFAULT_ALIGNED_GENTYPES
#define GLM_ENABLE_EXPERIMENTAL
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/hash.hpp>

#include <glm/gtc/quaternion.hpp>

#define GLM_ENABLE_EXPERIMENTAL
#include <glm/gtx/quaternion.hpp>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define STB_IMAGE_STATIC
#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>

#include "types.h"

#include "utils.hpp"

//#include "ShaderGenerator.h"

#include "Timer.h"



#include "vk.hpp"

const int MAX_FRAMES_IN_FLIGHT = 2;

#include "Allocator.h"
#include "Buffer.hpp"

#include "Mesh.h"

//#include "vk_mem_alloc.h"

#include "Camera.h"

#include "Renderer.h"

#include "Window.h"

#include "Input.h"

#include "Application.h"