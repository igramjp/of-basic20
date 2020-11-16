#include "Ball.h"

Ball::Ball() {
    pos = glm::vec2(ofGetWidth()/2, ofGetHeight()/2);
    radius = 100.0;
}

void Ball::draw() {
    ofSetColor(31, 63, 255, 100);
    ofDrawCircle(pos.x, pos.y, radius);
    
    ofSetColor(255, 0, 0, 200);
    ofDrawCircle(pos.x, pos.y, radius/10.0);
}

void Ball::setPos(glm::vec2 _pos) {
    pos = _pos;
}

glm::vec2 Ball::getPos() {
    return pos;
}

void Ball::setRadius(float _radius) {
    radius = _radius;
}

float Ball::getRadius() {
    return radius;
}
