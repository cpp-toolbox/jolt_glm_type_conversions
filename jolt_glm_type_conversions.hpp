#ifndef JOLT_GLM_TYPE_CONVERSIONS_HPP
#define JOLT_GLM_TYPE_CONVERSIONS_HPP

#include <Jolt/Jolt.h>
#include <glm/fwd.hpp>

JPH::Vec3 g2j(glm::vec3 input_vector);
glm::vec3 j2g(JPH::Vec3 input_vector);
glm::mat4 j2g(JPH::Mat44 input_matrix);

#endif // JOLT_GLM_TYPE_CONVERSIONS_HPP
