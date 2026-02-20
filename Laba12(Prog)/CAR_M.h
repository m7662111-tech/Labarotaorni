#ifndef CAR_H
#define CAR_H
#define N 100
typedef struct{
    char brand[20];
    int year;
    int pow;
    int price;
} Car;
extern Car cars[N];
extern int vib;
void zap();
void printc();
void sort(int i);
#endif