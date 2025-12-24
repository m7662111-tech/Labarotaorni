#ifndef POINT_H
#define POINT_H
typedef struct {
    double x;
    double y;
} Point;
Point createPoint(double x, double y);
int isParallelToYAxis(Point p1, Point p2);
void printPoint(Point p);
#endif