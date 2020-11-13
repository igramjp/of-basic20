#pragma once
#include "ofMain.h"

class Ball {
    public:
        Ball();
        void draw();
    
    private:
        glm::vec2 pos;
        float radius;
};
