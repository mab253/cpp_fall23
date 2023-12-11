#include "ofApp.h"

int i;
//--------------------------------------------------------------
void ofApp::setup(){
    for (i = 0; i < 50; i++) {
        Ball newBall;
        allBalls.push_back(newBall);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    //firstBall.update();
    //secondBall.update();
    for (i = 0; i < 50; i++) {
        allBalls.at(i).update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    /*ofSetColor(255, 255, 255); // white;
    ofDrawCircle(200, 200, 50);
    ofDrawRectangle(300, 350, 10, 60, 100);
    ofNoFill();
    ofSetColor(255, 0, 0); // (r, g, b);
    ofDrawBox(350, 500, 10, 80);
    ofDrawSphere(450, 550, 120);*/
    //firstBall.draw();
    //secondBall.draw();
    for (i = 0; i < 50; i++) {
        allBalls.at(i).draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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
