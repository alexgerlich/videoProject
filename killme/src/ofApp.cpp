#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    grabber.setVerbose(true);
    grabber.setDeviceID(1);
    grabber.initGrabber(960,580);

    vidNew = new unsigned char[grabW*grabH*3];
    refTex.allocate(grabW, grabH, GL_RGB);
    //ofPixelsRef pixels = grabber.getPixelsRef();
    myFont.loadFont("arial.ttf", 32);


}

//--------------------------------------------------------------
void ofApp::update(){
    grabber.update();
    //ofBackground(255, 255, 255);
    grabber.getTextureReference();



}

//--------------------------------------------------------------
void ofApp::draw(){
    //ofSetColor(255, 255, 255);
    //ofSetColor(ofGetMouseX(),ofGetMouseY(),255);
    grabber.draw(20,20);

   // refTex.draw(500,20);
    //grabber.draw(20,20);
    //pixels.draw( 500, 20);

    myFont.drawString("hi!!",ofRandom(20,800),ofRandom(20,580));
    if (mouseDragged()=true){
        myFont.drawString("WHOA THERE BUDDY", ofGetMouseX(),ofGetMouseY());
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
    ofSetColor(ofGetMouseX(),ofGetMouseY(),255);
    myFont.drawString("WHOA THERE BUDDY", ofGetMouseX(),ofGetMouseY());


}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    ofSetColor(255,255,255);

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
