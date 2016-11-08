#include "particlesystem.hpp"

//initialize constructor

particleSystem::particleSystem(ofVec2f position):
mPosition(position), mEmitRate(5), mIsAddingParticles(true){}

//update function
void particleSystem::update(ofVec2f force){
    if (mIsAddingParticles){
        // push new particles into our vector
        for (int i = 0; i< mEmitRate; i++){
            particle particle(mPosition); //particle is class, particle is object of class
            mParticleList.push_back(particle);
        }
    }
    
    
    for (int i = 0; i < mParticleList.size(); i++){
        // calculate the difference between center and particle position
        ofVec2f diff = ofVec2f(abs(mParticleList[i]. mPosition.x - mPosition.x), abs(mParticleList[i].mPosition.y - mPosition.y));
        
        mParticleList[i].resetForces();
        
        // force is passed through ofapp.cpp
        mParticleList[i].applyForce(force);
        
        // apply random speed/celocity to the particle
        mParticleList[i].update(ofMap(diff.length(),0,200,4,1));
        
        if (diff.length() >= ofRandom(150,250)){
            //stop adding particles if diff is higher than certain number
            mIsAddingParticles = false;
            //erase particle if it gets too far from center
            if(mParticleList.size() > 0) {
                mParticleList.erase(mParticleList.begin() + i);
            }
        }
    }
}

//draw function
void particleSystem::draw(){
    for (int i = 0; i < mParticleList.size(); i++) {
        mParticleList[i].draw();
        
    }
}
