#include <stdio.h>
#include "point.h"
int main() {
    double x1, y1, x2, y2;
    printf("Введите координаты первой точки (x y): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Введите координаты второй точки (x y): ");
    scanf("%lf %lf", &x2, &y2);
    Point p1 = createPoint(x1, y1);
    Point p2 = createPoint(x2, y2);
    printf("\nТочка 1: ");
    printPoint(p1);
    printf("\nТочка 2: ");
    printPoint(p2);
    printf("\n");
    if (isParallelToYAxis(p1, p2)) {
        printf("\nПрямая, проходящая через эти точки, ПАРАЛЛЕЛЬНА оси ординат (оси Y).\n");
    } else {
        printf("\nПрямая, проходящая через эти точки, НЕ параллельна оси ординат.\n");
    }
    return 0;
}
