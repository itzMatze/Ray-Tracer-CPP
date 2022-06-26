#pragma once

#include <memory>

class Material;

struct HitRecord
{
    float t;
    glm::vec3 p;
    glm::vec3 normal;
    Material* mat;
};
