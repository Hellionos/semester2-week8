
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#include "shapes.h"

int main( void ) {

    Point p1 = makePoint(0.0,0.0);
    Point p2 = makePoint(1.0,1.0);
    Point p3 = makePoint(1.0,0.0);
    Line l1 = makeLine(p1,p2);
    Triangle t1 = makeTriangle(p1,p2,p3);
    bool same;
    
    // test your code by calling the functions and printing the output 
    printf("Point 1 is (%.1f,%.1f)\n",p1.x,p1.y);
    printf("Point 2 is (%.1f,%.1f)\n",p2.x,p2.y);
    printf("Point 3 is (%.1f,%.1f)\n",p3.x,p3.y);
    printf("Line length is %.1f\n",lineLength(l1));
    printf("Triangle area is %.1f\n",triangleArea(t1));
    same = samePoint(p1,p2);
    printf("Points 1 and 2 are the same: %s\n", same ? "true" : "false");
    
    return 0;
}