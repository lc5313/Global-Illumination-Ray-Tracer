//
// Created by lauren on 2/3/20.
//

#ifndef RAYTRACER_COLOR_H
#define RAYTRACER_COLOR_H


class Color {
private:
    float alpha;

public:
    Color();
    Color(float red, float green, float blue);
    Color(float red, float green, float blue, float a);

    float r;
    float b;
    float g;
};


#endif //RAYTRACER_COLOR_H
