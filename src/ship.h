#pragma once
#include "ofxAssimpModelLoader.h"


class ship
{
public:
	ship();

	void setup(int _x, int _y, int _z, int _sx, int _sy, int _sz, int _model);
	void draw();
	void moveLeft();
	void moveRight(); 
	void moveUp(); 
	void moveDown(); 
	int x;
	int y;
	int z;
	int speedX;
	int speedY;
	int speedZ;
	int model;
	ofxAssimpModelLoader Model1;
};

