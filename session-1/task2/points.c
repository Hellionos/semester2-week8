
#include <stdio.h>
#include <math.h>
#include "points.h"

int main( void ) {

    // complete the structure definition in the header file first
    // implement code for the following
    // include necessary libraries
    /*
    Point p1 = { .x=1, .y=2 };
    Point p2 = { .x=-2, .y=4 };
    
    printf(" Distance between (%.1f,%.1f) and (%.1f,%.1f) is %f\n", 
             p1.x,p1.y,p2.x,p2.y,distance(p1,p2));
    */
   printf("%f",sqrt(4));
    Point p1 = { .x=1, .y=2 };
    Point p2 = { .x=-2, .y=4 };
    printf(" Distance between (%.1f,%.1f) and (%.1f,%.1f) is %f\n", 
             p1.x,p1.y,p2.x,p2.y,distance(p1,p2));


    return 0;
}

float distance( Point p1, Point p2 ) {
    float dx,dy,distance = 0.0;
    dx = p1.x - p2.x;
    dy = p1.y - p2.y;
    distance = sqrt(dx*dx + dy*dy);
    return distance;
}