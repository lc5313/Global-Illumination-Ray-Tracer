//
// Created by lauren on 2/3/20.
//

#ifndef RAYTRACER_POINT_H
#define RAYTRACER_POINT_H


class Point {
public:
    Point();
    Point(float a, float b, float c);
    float getEuclideanDistance(Point p); //return the distance between this and other point
    void transform(); //transforms the points values

    float x;
    float y;
    float z;
};


#endif //RAYTRACER_POINT_H
