#include "point.h"
#include <stdio.h>
Point createPoint(double x, double y) {
    Point p;
    p.x = x;
    p.y = y;
    return p;
}
int isParallelToYAxis(Point p1, Point p2) {
    return p1.x == p2.x;
}
void printPoint(Point p) {
    printf("(%.2f, %.2f)", p.x, p.y);
}