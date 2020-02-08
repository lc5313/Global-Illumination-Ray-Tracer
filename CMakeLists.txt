cmake_minimum_required(VERSION 3.15)
project(raytracer)

set(CMAKE_CXX_STANDARD 14)

add_executable(raytracer main.cpp Color.cpp Color.h Ray.cpp Ray.h Point.cpp Point.h Vector.cpp Vector.h World.cpp World.h Object.cpp Object.h Sphere.cpp Sphere.h Triangle.cpp Triangle.h Camera.cpp Camera.h Application.cpp Application.h ObjectData.h Material.cpp Material.h lodepng.cpp lodepng.h)