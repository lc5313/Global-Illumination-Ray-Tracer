//
// Created by lauren on 2/3/20.
//

#ifndef RAYTRACER_VECTOR_H
#define RAYTRACER_VECTOR_H

class Vector{
private:
    float x;
    float y;
    float z;
    float m; //m is for magnitude
public:
    Vector cross(Vector other);
    float dot(Vector other);
    float length();
    void normalize();
    void transform();
};


#endif //RAYTRACER_VECTOR_H
