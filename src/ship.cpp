#include "ship.h"


ship::ship()
{
}


void ship::setup(int _x, int _y, int _z, int _sx, int _sy, int _sz, int _model) {
	x = _x;      // assignes x the value of _x which is assigned in setup 
	y = _y;		// assignes y the value of _y which is assigned in setup 
	z = _z;
	speedX = _sx;  // assignes speedX the value of _sx which is assigned in setup 
	speedY = _sy; // assignes speedY the value of _sy which is assigned in setup 
	speedZ = _sy; // assignes speedY the value of _sy which is assigned in setup 
	model = _model; //Assignes sprite the value of _sprite which is assigned in setup 

					//Loads in the asteroid model 
	Model1.loadModel("Models/spaceship.3ds", 0);


}

void ship::draw() {

	Model1.enableTextures(); 
	Model1.enableMaterials(); 
	Model1.setPosition(x, y, z);
	Model1.setScale(0.2, 0.2, 0.2);
	Model1.update();
	Model1.drawFaces();


}


void ship::moveLeft() {

	x = x + 20;

}

void ship::moveRight() {

	x = x - 20;

}


void ship::moveUp() {

	y = y + 20;

}

void ship::moveDown() {

	y = y - 20;

}