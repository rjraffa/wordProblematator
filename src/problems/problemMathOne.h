/*
 *  problemMathOne.h
 *
 *  Created by Ryan Raffa on 4/25/13.
 *
 */

#ifndef _problemMathOne
#define _problemMathOne


#include "ofMain.h"

#include "uiCreate.h"
#include "uiReflect.h"
#include "uiPresent.h"

class problemMathOne {
	
	public:
        
        problemMathOne();
        ~problemMathOne();
    
        void update();
		void draw(ofTrueTypeFont& basicFont);

        void next();
        void switchScene();
        void updateWhichScene();

        //tracking touch events
        void touchingDown(ofTouchEventArgs &touch);
        void touchingMove(ofTouchEventArgs &touch);
        void touchingUp(ofTouchEventArgs &touch);
        void doubleTap(ofTouchEventArgs &touch);


//-----------------------------------------------    
//Math Problems
    
        uiCreate* create;
        uiReflect* reflect;
        uiPresent* present;
        
};

#endif
