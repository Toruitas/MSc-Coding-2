#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // var numerator = 0;
    // var denominator = 1;
    max_num = 20;  // max for numerator
    max_denom = 40;  // max for denominator
    segments = 5000;
    spacing = 3.14159 * 2 / segments;
    radius = 300;
    numerator = 0;
    denominator = 1;
    increment_denom = true;
    increment_num = true;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(512,384);
    ofSetColor(255,0,0);

            
    for(int i=0; i<=segments; i++){
        xN = cos(spacing*i*numerator)*cos(spacing*i*denominator)*radius;
        yN = cos(spacing*i*numerator)* sin(spacing*i*denominator)*radius;
        
        ofDrawLine(x,y,xN,yN);
        x = xN;
        y = yN;
    }

    if(numerator >= max_num){
        increment_num = false;
    }
    if(numerator <= 0){
        increment_num = true;
    }
    if (denominator >= max_denom){
        increment_denom = false;
    }
    if (denominator <= 1){
        increment_denom = true;
    }
    if(increment_num){
        numerator +=0.5;
    }else{
        numerator -=0.25;
    }
    if(increment_denom){
        denominator +=0.5;
    }else{
        denominator -=0.125;
    }


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
