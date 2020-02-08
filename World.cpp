//
// Created by lauren on 2/3/20.
//

#include "World.h"
#include <iostream>
//default constructor will initialize background color to black
World::World(){
    n = 0;
}

//constructor that takes a background color as a parameter
World::World(Color bg){
    backgroundColor = bg;
    n = 0;
}

void World::add(Object obj) {
    objects.push_back(obj);
    n ++;
}

void World::transformAllObjects(glm::mat4 matrix){
    for (int i = 0; i < n; i++){
        objects.at(i).transform(matrix);
    }
}
Color World::spawnRay(Ray ray){
    float omega = -1.0f;
    Color current = backgroundColor;
    for (int i = 0; i < 1; i++){
        cout<<"loop"<<endl;
        float obj_omega = objects.at(i).intersect(ray);
        cout<<omega<<endl;
        if (obj_omega > 0 && obj_omega < omega){
            omega = obj_omega;
            current = objects.at(i).material.color;
            cout<<"intersect"<<endl;
        }
    }
    return current;
}