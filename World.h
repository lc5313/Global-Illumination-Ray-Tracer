//
// Created by lauren on 2/3/20.
//


#ifndef RAYTRACER_WORLD_H
#define RAYTRACER_WORLD_H

#include <vector>
#include "Object.h"
#include "Ray.h"
#include "Color.h"


using namespace std;

class World {
public:
    vector<Object> objects;
    Color backgroundColor;
    int n; //number of objects

    World(Color bg);
    World();

    void add(Object);
    void transform(Object obj);
    void transformAllObjects(glm::mat4 matrix);
    Color spawnRay(Ray ray);

};


#endif //RAYTRACER_WORLD_H
