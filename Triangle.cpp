//
// Created by lauren on 2/3/20.
//

#include "Triangle.h"

Triangle::Triangle(Point a, Point b, Point c){
    vertices[0] = a;
    vertices[1] = b;
    vertices[2] = c;
    material = Material();
}

Triangle::Triangle(Point a, Point b, Point c, Material mat){
    material = mat;
    vertices[0] = a;
    vertices[1] = b;
    vertices[2] = c;
}

float Triangle::intersect(Ray ray) {
    glm::vec3 p0=glm::vec3 (vertices[0].x, vertices[0].y, vertices[0].z);
    glm::vec3 p1=glm::vec3(vertices[1].x, vertices[1].y, vertices[1].z);
    glm::vec3 p2 = glm::vec3(vertices[2].x, vertices[2].y, vertices[2].z);
    glm::vec3 ray_origin = glm::vec3(ray.origin.x, ray.origin.y, ray.origin.z);

    glm::vec3 e1 = p1 - p0;
    glm::vec3 e2 = p2 - p0;
    glm::vec3 T = ray_origin - p0;
    glm::vec3 P = glm::cross(ray.direction, e2);
    glm::vec3 Q = glm::cross(T, e1);


    float denom = glm::dot(P, e1);
    if (denom == 0){
        return -1;
    }
    glm::vec3 answer = (1/denom) * glm::vec3(glm::dot(Q, e2), glm::dot(P, T), glm::dot(Q, ray.direction));

    if (answer[0] < 0){
        return -1;
    }
    if (answer[1]<0 || answer[2]<0 || answer[1]+answer[2]>1){
        return -1;
    }

    return answer[0];
}

void Triangle::transform(glm::mat4 matrix){
    for (int i = 0; i < 3; i++){
        glm::vec4 vertex = glm::vec4(vertices[i].x, vertices[i].y, vertices[i].z, 1);
        glm::vec4 newPosition = matrix * vertex;
        vertices[i].x = newPosition[0];
        vertices[i].y = newPosition[1];
        vertices[i].z = newPosition[2];
    }
}