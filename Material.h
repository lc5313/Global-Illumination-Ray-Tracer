//
// Created by lauren on 2/4/20.
//

#ifndef RAYTRACER_MATERIAL_H
#define RAYTRACER_MATERIAL_H

#include "Color.h"

class Material {

public:
    Material();

    Color color;

    Material(Color c);
};


#endif //RAYTRACER_MATERIAL_H
