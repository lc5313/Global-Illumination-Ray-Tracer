//
// Created by lauren on 2/3/20.
//

#ifndef RAYTRACER_SPHERE_H
#define RAYTRACER_SPHERE_H


#include "Object.h"
#include "Point.h"
#include "Ray.h"

class Sphere : public Object {
public:
    Material material;
    Point center;
    float radius;
    Sphere(Point c, float r, Material mat);
    virtual float intersect(Ray);
    virtual void transform(glm::mat4 matrix);
};


#endif //RAYTRACER_SPHERE_H
