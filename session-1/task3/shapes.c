
#include <stdio.h>
#include "shapes.h"

int main( void ) {

    float width,height = 0.0;
    width = 5;
    height = 7;
    // complete the structure definition in the header file first
    // code in main to test the structures and functions
    Point p = { .x=2, .y=3 };
    Point q = { .x=-1, .y=4 };
    Rectangle r = makeRectangle(p, width, height);
    printf("Area: %.2f\n", area(r));
    shiftRectangle(&r, q);
    printf("Shifted rectangle: (%.1f, %.1f)\n", r.p.x, r.p.y);
    scaleRectangle(&r, 2.0);
    printf("Scaled rectangle: (%.1f, %.1f)\n", r.p.x, r.p.y);

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

    Point p;
    p.x = r->p.x + dp.x;
    p.y = r->p.y + dp.y;
    r->p = p;
/*
p.x = (*r).p.x + dp.x;
p.y = (*r).p.y + dp.y;
(*r).p = p;
*/
    return;
}

void scaleRectangle( Rectangle *r, float scale ) {

    Point p;
    p.x = r->p.x * scale;
    p.y = r->p.y * scale;
    r->p = p;
    r->width = r->width * scale;
    r->height = r->height * scale;

    return;
}
