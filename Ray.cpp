//
// Created by lauren on 2/3/20.
//

#include "Ray.h"
#include "Point.h"
#include <glm/glm.hpp>

Ray::Ray(Point ori, glm::vec3 dir) {
    origin = ori;
    direction = dir;
}