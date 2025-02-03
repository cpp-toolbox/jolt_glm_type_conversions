#include "jolt_glm_type_conversions.hpp"

JPH::Vec3 g2j(const glm::vec3 &input_vector) { return {input_vector.x, input_vector.y, input_vector.z}; }

glm::vec3 j2g(const JPH::Vec3 &input_vector) { return {input_vector.GetX(), input_vector.GetY(), input_vector.GetZ()}; }

glm::mat4 j2g(const JPH::Mat44 &input_matrix) {
    glm::mat4 glm_mat;
    for (int col = 0; col < 4; col++) {
        for (int row = 0; row < 4; row++) {
            glm_mat[col][row] = input_matrix(row, col);
        }
    }
    return glm_mat;
}
