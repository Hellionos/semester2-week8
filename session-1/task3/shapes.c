
#include <stdio.h>
#include "shapes.h"

int main( void ) {

    float width,height = 0.0;
    width = 5;
    height = 7;
    // complete the structure definition in the header file first
    // code in main to test the structures and functions
    Point p = { .x=2, .y=3 };
    makeRectangle(p, width, height);
    
    return 0;
}

Rectangle makeRectangle( Point p, float width, float height ){
    Rectangle r = {
        .p = p,
        .width = width,
        .height = height,
    };

    return r;
}

float area( Rectangle r ) {
    float a = 0.0;
    a = r.width*r.height;


    return a;
}

void shiftRectangle( Rectangle *r, Point dp ) {

    return;
}

void scaleRectangle( Rectangle *r, float scale ) {

    return;
}
