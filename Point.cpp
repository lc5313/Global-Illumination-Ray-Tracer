//
//class to represent a 3d point
// Created by lauren on 2/3/20.
//
#include <cmath>
#include "Point.h"

Point::Point(){
    x = 0.0;
    y=0.0;
    z=0.0;
}
Point::Point(float a, float b, float c){
    this->x = a;
    this ->y = b;
    this->z = c;
}

float Point::getEuclideanDistance(Point p) {
    return sqrt(pow(x - p.x, 2) + pow (y - p.y, 2) + pow(z - p.z, 2));
}

