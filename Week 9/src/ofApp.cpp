#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(255, 255, 255);
    R = 255;
    G = 255;
    B = 255;
    
    text = "";
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(R, 0, 0);
    ofDrawEllipse(ofGetWindowWidth() * 0.25, ofGetWindowHeight() * 0.5, 200, 200);
    
    ofSetColor(0, G, 0);
    ofDrawTriangle(ofGetWindowWidth() * 0.5 - 100, ofGetWindowHeight() * 0.5 + 100, ofGetWindowWidth() * 0.5 + 100, ofGetWindowHeight() * 0.5 + 100, ofGetWindowWidth() * 0.5, ofGetWindowHeight() * 0.5 - 100);
    
    ofSetColor(0, 0, B);
    ofDrawRectangle(ofGetWindowWidth() * 0.75 - 100, ofGetWindowHeight() * 0.5 - 100, 200, 200);
    
    ofSetColor(0, 0, 0);
    ofDrawBitmapString(text, ofGetWindowWidth() / 2, 100);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == OF_KEY_LEFT){
        R = ofRandom(50, 255);
    }
    
    if (key == OF_KEY_DOWN){
        G = ofRandom(50, 255);
    }
    
    if (key == OF_KEY_RIGHT){
        B = ofRandom(50, 255);
    }
    
    if(key == OF_KEY_BACKSPACE && text.size()>0) {
        text = text.substr(0, text.size()-1);
    } else {
        text.append (1, (char)key );
    }
}


//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
