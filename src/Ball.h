#pragma once
#include "ofMain.h"

class Ball {
    public:
        Ball();
        void update();
        void draw();
    
        void setPos(glm::vec2 pos);
        glm::vec2 getPos();
        void setRadius(float radius);
        float getRadius();
        void setSpeed(glm::vec2 speed);
        glm::vec2 getSpeed();
    
    private:
        glm::vec2 pos;
        float radius;
        glm::vec2 speed;
        float phase;
        float phaseSpeed;
        float stretchedRadius;
};
