#ifndef CLOTH_APP_H
#define CLOTH_APP_H

#include "ofMain.h"
#include "ofxCloth.h"

class ofApp : public ofBaseApp
{
	public:
		Clothing cloth;
		ofEasyCam camera;
		ofLight light;
		ofMaterial material;
	        float zpos;
		bool wire,stop,wind;
		void setup();
		void update();
		void draw();
		void keyPressed(int key);
};

#endif

