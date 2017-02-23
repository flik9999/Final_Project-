#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	ofSetVerticalSync(true);
	ofEnableDepthTest(); 
	//glShadeModel(GL_SMOOTH);

	ofSetSmoothLighting(true);


	//variables for camera lookat
	int x = 0;
	int y = 0;
	int z = 0;


	cam.setPosition(x,y,z); 
	cam.lookAt(ofVec3f(0,0,100), ofVec3f (0,1,0)); 

	light.setDiffuseColor(ofColor(100.f, 100.f, 100.f));
	light.setDirectional();
	light.setOrientation(ofVec3f(0, 0, 1));
	light.setPosition(0, 0, 0);


	myShip.setup(0, 0, 250, 1, 0, 0, 0);

	// for (int i = 0; i < 100; i++) {
	//	Comets.push_back(meteor());
	//	Comets[i].setup(ofRandom(-500, 500), ofRandom(-500, 500), ofRandom(1000, 5000), 0, 0, 1, 0);
	//}
	
//	for (int j = 0; j<Comets.size(); j++)
//	{
//		Comets[j].setup();
	//}
//	ofRandom(-500, 500), ofRandom(-500, 500), ofRandom(1000, 5000), 0, 0, 1, 0

	int asteroidField = 0; 

}

//--------------------------------------------------------------
void ofApp::update(){
	
	asteroidField++;
	//if (Comets.size>100){
	if (asteroidField = 300) {
		meteor tempEnemy;
		tempEnemy.setup(ofRandom(-500, 500), ofRandom(-500, 500), ofRandom(3000, 10000), 0, 0, -20, 0);
		Comets.push_back(meteor(tempEnemy));
	}
//	}



}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(255, 0, 0);


	cam.begin();
	ofEnableLighting();
	light.enable();





	for (int j = 0; j < Comets.size(); j++)
	{
	Comets[j].draw();
	}
	

	//Removes comets off the screen 
	for (int i = 0; i < Comets.size(); i++) {
		if ((!Comets.empty())) {
			if (Comets[i].z < 0) {
				Comets.erase(Comets.begin() + i);
			}
		}
	}




	myShip.draw(); 


	light.disable();
	ofDisableLighting();
	cam.end();
 
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

	if (key == OF_KEY_LEFT) {
		x = x - 20; 
		cam.setPosition(x, y, z);
		myShip.moveLeft();
	}

	if (key == OF_KEY_RIGHT) {
		x = x + 20; 
		cam.setPosition(x, y, z);
		myShip.moveRight();
	}
	if (key == OF_KEY_UP) {
		z = z + 20;
		cam.setPosition(x, y, z);
		myShip.moveUp();
	}

	if (key == OF_KEY_DOWN) {
		z = z - 20;
		cam.setPosition(x, y, z);
		myShip.moveDown(); 
		// do something
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
