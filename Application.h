//
// Created by lauren on 2/3/20.
//this class does the work for rendering a specific scene. it applies the structure
//of the other classes
//instantiates world and camera, adds objects and renders the scene
//constants/global variables are defined here and passed to the appropraite classes
//

#ifndef RAYTRACER_APPLICATION_H
#define RAYTRACER_APPLICATION_H


#include "Camera.h"
#include "World.h"
#include <glm/glm.hpp>
#include <iostream>
#include "lodepng.h"
//GLOBALS
//for World
////background color is "cornflower blue"
//Color bgColor(0.35, 0.58, 0.92);
//
////for camera
////location in world coordinates
//Point cam_loc;
//Vector lookat;
//Vector up;
//
////Objects with coordinates in world space
//
//
////Image frame - dimensions for the plane on which the image is projected
//float imagePlaneHeight; //world units
//float imagePlaneWidth; //world units
//int imageHeight; // in pixels
//int imageWidth; //in pixels
//float focalLength;



class Application {
    Camera camera;
    World world;

public:
    void letsGo();
};


#endif //RAYTRACER_APPLICATION_H
