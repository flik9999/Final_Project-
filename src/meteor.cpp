#include "meteor.h"



meteor::meteor()
{
}

void meteor::setup(int _x, int _y, int _z, int _sx, int _sy, int _sz, int _model) {
	x = _x;      // assignes x the value of _x which is assigned in setup 
	y = _y;		// assignes y the value of _y which is assigned in setup 
	z = _z;
	speedX = _sx;  // assignes speedX the value of _sx which is assigned in setup 
	speedY = _sy; // assignes speedY the value of _sy which is assigned in setup 
	speedZ = _sz; // assignes speedY the value of _sy which is assigned in setup 
	model = _model; //Assignes sprite the value of _sprite which is assigned in setup 

					//Loads in the asteroid model 
	Model1.loadModel("Models/asteroid.3ds", 0);


}

void meteor::draw() {


	Model1.setPosition(x, y, z);
	Model1.setScale(0.1, 0.1, 0.1);
	x = x + speedX;
    y = y + speedY;
	z = z + speedZ;
	Model1.update(); 
	Model1.drawFaces();

	
	//ofSetColor(255);
	//ofDrawSphere(x, y, z, 40);


}