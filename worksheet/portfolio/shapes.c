
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

#include "shapes.h"

//Name: Ethan West
//Student ID: 201990893

Point makePoint( float x, float y ) {
    Point new;
    new.x = x;
    new.y = y;
    return new;
}

// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()

Line makeLine( Point p1, Point p2 ) {
    Line new;
    new.p[0] = p1;
    new.p[1] = p2;
    return new;
}  

Triangle makeTriangle( Point p1, Point p2, Point p3 ) {
    Triangle new;
    new.p[0] = p1;
    new.p[1] = p2;
    new.p[2] = p3;
    return new;
}

float lineLength( Line l ){
    float length, dx, dy;
    dx = l.p[1].x - l.p[0].x;
    dy = l.p[1].y - l.p[0].y;
    length = sqrt(dx*dx + dy*dy);
    return length;
} 

float triangleArea( Triangle t ) {
    float area, a, b, c, s;
    a = lineLength(makeLine(t.p[0], t.p[1]));
    b = lineLength(makeLine(t.p[1], t.p[2]));
    c = lineLength(makeLine(t.p[2], t.p[0]));
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}

bool samePoint( Point p1, Point p2 ) {
    bool same;
    if (abs(lineLength(makeLine(p1,p2)))<1.0e-6) {
        same = true;
    } else {
        same = false;
    }
    return same;
}

bool pointInLine( Point p, Line l) {
    bool inLine;
    if (samePoint(p, l.p[0]) || samePoint(p, l.p[1])) {
        inLine = true;
    } else {
        inLine = false;
    }
    return inLine;
}

bool pointInTriangle( Point p, Triangle t ) {
    bool inTriangle;
    if (samePoint(p, t.p[0]) || samePoint(p, t.p[1]) || samePoint(p, t.p[2])) {
        inTriangle = true;
    } else {
        inTriangle = false;
    }
    return inTriangle;
}
