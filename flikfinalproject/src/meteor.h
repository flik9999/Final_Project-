#pragma once
#include "ofxAssimpModelLoader.h"


class meteor
{
public:
	meteor();

	void setup(int _x, int _y, int _z, int _sx, int _sy, int _sz, int _model);
	void draw();
	int x;
	int y;
	int z;
	int speedX;
	int speedY;
	int speedZ;
	int model;
	ofxAssimpModelLoader Model1;
};
