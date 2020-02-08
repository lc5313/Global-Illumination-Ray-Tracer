//
// Created by lauren on 2/3/20.
//

#ifndef RAYTRACER_CAMERA_H
#define RAYTRACER_CAMERA_H

#include "Point.h"
#include <glm/glm.hpp>
#include "World.h"
#include "Ray.h"
#include <vector>



class Camera {
private:
    Point position;
    glm::vec3 lookat;
    glm::vec3 up;
    glm::mat4 viewMat;
    float f; //focal length
    float width;
    float height;
    float pixelHeight;
    float pixelWidth;




public:
    Camera();
    Camera(Point pos, glm::vec3 look, glm::vec3 u);
    void render(World world);
    vector<Color>viewFrame;
    vector<unsigned char> convertRBGValues();

    int wPixels=800;
    int hPixels=500;
};


#endif //RAYTRACER_CAMERA_H
