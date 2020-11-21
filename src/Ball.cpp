#include "Ball.h"

Ball::Ball() {
    pos = glm::vec2(ofGetWidth()/2, ofGetHeight()/2);
    radius = 100.0;
    speed = glm::vec2(0, 0);
    phaseSpeed = ofRandom(0.1, 0.5);
    phase = 0;
}

void Ball::update() {
    stretchedRadius = radius + sin(phase)*radius/4;
    phase += phaseSpeed;
    if (phase > TWO_PI) {
        phase -= TWO_PI;
    }
    
    pos += speed;
    
    if (pos.x < radius || pos.x > ofGetWidth() - radius) {
        speed.x *= -1;
    }
    if (pos.y < radius || pos.y > ofGetHeight() - radius) {
        speed.y *= -1;
    }
}

void Ball::draw() {
    ofSetColor(31, 63, 255, 100);
    ofDrawCircle(pos.x, pos.y, stretchedRadius);
    
    ofSetColor(255, 0, 0, 200);
    ofDrawCircle(pos.x, pos.y, stretchedRadius/10.0);
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

void Ball::setSpeed(glm::vec2 _speed) {
    speed = _speed;
}

glm::vec2 Ball::getSpeed() {
    return speed;
}
