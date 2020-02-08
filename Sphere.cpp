//
// Created by lauren on 2/3/20.
//

#include "Sphere.h"

Sphere::Sphere(Point p, float r, Material mat){
    center = p;
    radius = r;
    material = mat;
}

float Sphere::intersect(Ray r){
    float posw;
    float negw;
    glm::normalize(r.direction);
    float B = 2 * ((r.direction[0] * (r.origin.x - center.x)) + \
           (r.direction[1] * (r.origin.y - center.y)) + \
           (r.direction[2] * (r.origin.z - center.z)));

    float C = pow(r.origin.x - center.x, 2) + pow(r.origin.y - center.y, 2) /
            + pow(r.origin.z - center.z, 2) - pow(radius, 2);

    if (pow(B, 2) - 4 * C < 0){
        //no intersection
        return -1.0f;
    }

    //no intersection, return -1
    if (pow(B, 2) - 4.0f * C < 0){
            return -1.0f;
        }
        else if (pow(B, 2) - 4.0f * C < 0){
            return (-B + sqrt(pow(B, 2) - 4.0f * C)) / 2.0f;;
        }
        else{
            negw = (-B - sqrt(pow(B, 2) - 4.0f * C)) / 2.0f;
            posw = (-B + sqrt(pow(B, 2) - 4.0f * C)) / 2.0f;
            if (negw > 0){
                return negw;
            }
            return posw;
        }

    }
void Sphere::transform(glm::mat4 matrix) {
    glm::vec4 posVector = glm::vec4(center.x, center.y, center.z, 1);
    glm::vec4 newPos = matrix * posVector;
    center.x = newPos[0];
    center.y = newPos[1];
    center.z = newPos[2];
}

