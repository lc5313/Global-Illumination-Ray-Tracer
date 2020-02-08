//
// Created by lauren on 2/3/20.
//

#ifndef RAYTRACER_OBJECT_H
#define RAYTRACER_OBJECT_H


#include <glm/glm.hpp>
#include "Material.h"
#include "Ray.h"
class Object {
public:
    virtual void transform(glm::mat4 matrix);
    virtual float intersect(Ray ray);
    Object();


    Material material;
};


#endif //RAYTRACER_OBJECT_H
