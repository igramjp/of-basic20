#pragma once
#include "ofMain.h"

class Ball {
    public:
        Ball();
        void draw();
    void setPos(glm::vec2 pos);
    glm::vec2 getPos();
    void setRadius(float radius);
    float getRadius();
    
    private:
        glm::vec2 pos;
        float radius;
};
