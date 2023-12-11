//
//  Ball.cpp
//  fall23-particles
//
//  Created by MAB on 11/13/23.
//

#include <stdio.h>
#include "Ball.h"

// fill it with function definitions

Ball::Ball() {
    x = ofRandom(0, ofGetWidth());
    y = ofRandom(0, ofGetHeight());
    
    speedX = ofRandom(-7,7);
    speedY = ofRandom(-1, 1);
    
    dimension = ofRandom(10, 50);
    
    color.set(ofRandom(255), ofRandom(255), ofRandom(255));
    
}

void Ball::update() {
    
    float currentWidth = ofGetWidth();
    float currentHeight = ofGetHeight();
    
    if (x < 0) {
        x = 0;
        speedX *= -1;
        color.set(ofRandom(255), ofRandom(255), ofRandom(255));
    }
    if (x > currentWidth) {
        x = currentWidth;
        speedX *= -1;
        color.set(ofRandom(255), ofRandom(255), ofRandom(255));
    }
    if (y < 0) {
        y = 0;
        speedY *= -1;
        color.set(ofRandom(255), ofRandom(255), ofRandom(255));
    }
    if (y > currentHeight) {
        y = currentHeight;
        speedY *= -1;
        color.set(ofRandom(255), ofRandom(255), ofRandom(255));
    }

    x += speedX;
    y += speedY;
}

void Ball::draw() {
    ofSetColor(color);
    ofNoFill();
    ofDrawBox(x, y, 10, dimension);
}
