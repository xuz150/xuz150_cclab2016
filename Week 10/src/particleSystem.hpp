#pragma once
#include "ofMain.h"
#include "particle.h"

class particleSystem{
public:
    particleSystem(ofVec2f position);
    void update(ofVec2f force);
    void draw();
    
    vector<particle> mParticleList; // vector<T> nameofVector, vectors are like a fancy, high-end arrays
    ofVec2f mPosition;
    int mEmitRate;
    bool mIsAddingParticles;
    
};
