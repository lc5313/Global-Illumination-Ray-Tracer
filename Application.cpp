//
// Created by lauren on 2/3/20.
//

#include "Application.h"
#include "ObjectData.h"
#include "Camera.h"
//GLOBALS
//background color is "cornflower blue"
Color bgColor(0, 0.0, 1.0);

void Application::letsGo(){
    cout <<"hi" <<endl;
    //create a world and add objects to it
    World world = World(bgColor);
    for (int i = 0; i < N; i++){
        world.add(objs[i]);
    }

    //create a camera
    Camera camera = Camera();
    camera.render(world);
    cout << camera.viewFrame.size();
    vector<unsigned char> data = camera.convertRBGValues();
    cout << data.size() << endl;
   unsigned error = lodepng::encode("img.png", data, static_cast<unsigned int>(camera.wPixels), static_cast<unsigned int>(camera.hPixels));
    cout << error << endl;

}