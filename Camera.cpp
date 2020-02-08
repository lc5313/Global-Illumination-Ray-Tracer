//
// Created by lauren on 2/3/20.
//

#include "Camera.h"
#//camera GLOBALS:
float hght = 5.0f;
float wid = 8.0f;
float focal = 2.0f;

Camera::Camera(Point pos, glm::vec3 look, glm::vec3 uppi) {
    position = pos;
    up = uppi;
    lookat = look;

    glm::vec3 n = glm::normalize(glm::vec3(pos.x, pos.y, pos.z) - lookat);
    glm::vec3 u = glm::normalize(glm::cross(up, n));
    glm::vec3 v = glm::normalize(glm::cross(n, u));

    glm::vec3 eyepoint = glm::vec3(pos.x, pos.y, pos.z);
    viewMat = {
            u[0], u[1], u[2], glm::dot(-eyepoint, u),
              v[0], v[1], v[2], glm::dot(-eyepoint, v),
              n[0], n[1], n[2], glm::dot(-eyepoint, n),
              0, 0, 0, 1};

    height = hght;
    width = wid;
    f = focal;
//    wPixels = wp;
//    hPixels = hp;
    pixelHeight =(float) hPixels /height;
    pixelWidth = (float) wPixels/width;
}

Camera::Camera(){
    position = Point(0, 0, 0);
}

void Camera::render(World world) {
    for (Object obj : world.objects) {
        obj.transform(viewMat); //transform all objects into world coordinates;
    }
    float y = f;

//    float z = height / 2.0f - pixelHeight / 2.0f;

//for (int i = 0; i < wPixels; i++) {
//    viewFrame.push_back(world.spawnRay(Ray(Point(), glm::vec3(x, y, z))));
//    x += pixelWidth;
//}
    float x = -(width / 2.0f) + pixelWidth / 2.0f;
    for (int i = 0; i < wPixels; i++) {
        float z = height / 2.0f - pixelHeight / 2.0f;
        for (int j = 0; j < hPixels; j++) {
                viewFrame.push_back(world.spawnRay(Ray(Point(), glm::vec3(x, y, z))));
                z -= pixelHeight;
        }
        x += pixelWidth;
    }
}

vector<unsigned char> Camera::convertRBGValues() {
    vector<unsigned char> colors;
    //loop through viewframe
    int n = viewFrame.size();
    for (int i = 0; i < n; i++){
        colors.push_back(static_cast<unsigned char>(viewFrame.at(i).r * 255 + 0.5f));
        colors.push_back(static_cast<unsigned char>(viewFrame.at(i).g  * 255 + 0.5f));
        colors.push_back(static_cast<unsigned char>(viewFrame.at(i).b * 255 + 0.5f));
        colors.push_back(static_cast<unsigned char>(255));
    }
    return colors;
}