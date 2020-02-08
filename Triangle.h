//
// Created by lauren on 2/3/20.
//

#ifndef RAYTRACER_TRIANGLE_H
#define RAYTRACER_TRIANGLE_H


#include "Object.h"
#include "Ray.h"
#include "World.h"
#include "Point.h"
#include <list>

class Triangle : public Object {
private:
    Point vertices[3];
    glm::vec3 normal;
public:
    Material material;
    Triangle(Point a, Point b, Point c);
    Triangle (Point a, Point b, Point c, Material mat);
    virtual float intersect(Ray);
    virtual void transform(glm::mat4 matrix);

};


#endif //RAYTRACER_TRIANGLE_H
