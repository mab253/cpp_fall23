//
//  Ball.h
//  fall23-particles
//
//  Created by MAB on 11/13/23.
//

#ifndef Ball_h
#define Ball_h

#include "ofMain.h"

class Ball {
    
public:
    float x;
    float y;
    
    float speedX;
    float speedY;
    
    float dimension;
    
    ofColor color;
    
    // functions
    void update();
    void draw();
    
    // constructor!
    Ball();
    
    
    
};


#endif /* Ball_h */
