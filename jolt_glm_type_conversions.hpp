#ifndef JOLT_GLM_TYPE_CONVERSIONS_HPP
#define JOLT_GLM_TYPE_CONVERSIONS_HPP

#include <Jolt/Jolt.h>
#include <glm/glm.hpp>

JPH::Vec3 g2j(const glm::vec3 &input_vector);
glm::vec3 j2g(const JPH::Vec3 &input_vector);
glm::mat4 j2g(const JPH::Mat44 &input_matrix);

#endif // JOLT_GLM_TYPE_CONVERSIONS_HPP
