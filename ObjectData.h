//
// Created by lauren on 2/4/20.
//

#ifndef RAYTRACER_OBJECTDATA_H
#define RAYTRACER_OBJECTDATA_H

#include "Object.h"
#include "Sphere.h"
#include "Triangle.h"

int N =4;
#endif //RAYTRACER_OBJECTDATA_H

Object objs[] = {
    Sphere(Point(3.3142,  1.4261, 1.6064), 1.1, Material(Color(0.0, 0.0, 0.0))),
    Sphere(Point(1.4158,  1.1375, 0.17426), 0.9375, Material()),
    Triangle(Point(-3.4795, 0, -1.5556), Point(-3.4795, -0.2, 1.5556), Point(3.4795, -0.2, 1.556), Material(Color (1.0, 0.0, 0.0))),
    Triangle(Point(-3.4795, 0, -1.5556), Point(3.4795, -0.2, 1.5556), Point(3.4795, -0.2, -1.5556), Material(Color (1.0, 0.0, 0.0)))

} ;