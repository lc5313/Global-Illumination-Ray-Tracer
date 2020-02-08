//
// Created by lauren on 2/3/20.
//

#ifndef RAYTRACER_RAY_H
#define RAYTRACER_RAY_H

#include "Point.h"
#include "Vector.h"
#include <glm/glm.hpp>
class Ray{

public:
    Ray(Point ori, glm::vec3 dir);

    glm::vec3 direction;
    Point origin;
};


#endif //RAYTRACER_RAY_H
