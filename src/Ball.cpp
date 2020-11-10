#include "Ball.h"

void Ball::draw() {
    ofSetColor(31, 63, 255);
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, 100);
}
