
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
    Point p1 = { .x=1, .y=2 };
    Point p2 = { .x=-2, .y=4 };
    printf("Distance between (%.1f,%.1f) and (%.1f,%.1f) is %.2f\n", 
             p1.x,p1.y,p2.x,p2.y,distance(p1,p2));
    Point p3 = reflect(p1);
    printf("Reflected point 1 is (%.1f,%.1f)\n",p3.x,p3.y);
    Point p4 = shift(p3,p2);
    printf("The shifted point of the reflection of point 1 by point 2 is (%.1f,%.1f)\n",p4.x,p4.y);

    return 0;
}

float distance( Point p1, Point p2 ) {
    float dx,dy,distance = 0.0;
    dx = p1.x - p2.x;
    dy = p1.y - p2.y;
    distance = sqrt(dx*dx + dy*dy);
    return distance;
}

Point reflect( Point q) {
    Point p;
    p.x = q.x;
    p.y = -q.y;
    return p;
} 

Point shift( Point q, Point dq ) {
    Point p;
    p.x = q.x + dq.x;
    p.y = q.y + dq.y;
    return p;
}


//using gcc points.c -o points -lm to compile