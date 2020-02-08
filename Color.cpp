//
// Created by lauren on 2/3/20.
//

#include "Color.h"

//constructor for the color class
Color::Color(float red, float green, float blue) {
    r = red;
    g = green;
    b = blue;
    alpha = 1.0;
}

//alternate constructor that includes an alpha value (intensity of the color)
Color::Color(float red, float green, float blue, float a){
    r = red;
    g = green;
    b = blue;
    alpha = a;
}

//default constructor for the color class is black
Color::Color(){
    r = 0.0;
    g = 0.0;
    b = 0.0;
    alpha = 1.0;
};