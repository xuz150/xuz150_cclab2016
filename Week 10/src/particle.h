#pragma once
#include "ofMain.h"

class particle{
    
public:
    //create constructors, constructors initialize classes, they can take arguments, but they don't have a return type, because they return classes themselves
    
    particle(ofVec2f pos);
    
    void update(float multiplier);
    void draw();
    void applyForce(ofVec2f force);
    void resetForces();
    
    ofVec2f mPosition, mSpeed, mDirection; // Speed = velocity; direction = acceleration;
    float mLifeSpan;
    
};
