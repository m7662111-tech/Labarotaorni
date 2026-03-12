#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "CAR_M.h"
int vib = 0;
Car cars[N];
void zap(){
    const char* brands[] = {"Honda", "Subaru", "Suzuki", "BMW", "Audi", "Nissan", "Tesla", "Lada", "Daewoo", "Toyota", "Cherry", "Haval", "Volvo", "Ferrari"};
    int brands_count = sizeof(brands) / sizeof(brands[0]);
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        strcpy(cars[i].brand, brands[rand() % brands_count]);
        cars[i].year = 1970 + rand() % 56;
        cars[i].pow = 140 + rand() % 400;
        cars[i].price = rand()%(1401 + 700)*1000;
    }
}
void printc(){
    printf("\n\n\n         ===== АВТОМОБИЛИ ДОСТУПНЫЕ ДЛЯ ПРОДАЖИ =====\n");
    printf("+---------------------+-----------+-----------+---------------+\n");
    printf("  Марка                Год выпуска   Мощность     Цена(руб)     \n");
    printf("+---------------------+-----------+-----------+---------------+\n");
    for (int i = 0; i < N; i++) {
        printf(" %-20s     %-10d   %-10d   %-14d \n",
               cars[i].brand, cars[i].year, cars[i].pow, cars[i].price);
    }
    printf("+---------------------+-----------+-----------+---------------+\n");
    printf(" Всего автомобилей: %d                                           \n", N);
    printf("+-------------------------------------------------------------+\n\n\n");
    printf("+-------------------------------------------------------------+\n");
    printf(" Перед вами представленны категории для сортировки автомобилей:\n\n");
    printf("   [1] --- Сортировка автомобилей по году;\n   [2] --- Сортировка автомобилей по мощности;\n   [3] --- Сортировка автомобилей по цене;\n");
    printf("\n Пожалуйста выберите категорию для сортировки: ");
    scanf("%d", &vib);
    printf("+-------------------------------------------------------------+\n");
}
void sort(int i){
    if(i == 1){
        int swapped;
        for (int i = 0; i < N - 1; i++) {
            swapped = 0;
            for (int j = 0; j < N - i - 1; j++) {
                if (cars[j].year > cars[j + 1].year) {
                    Car temp = cars[j];
                    cars[j] = cars[j + 1];
                    cars[j + 1] = temp;
                    swapped = 1;
                }
            }
            if (!swapped) break;
        }
        printf("+---------------------+-----------+-----------+---------------+\n");
        printf("  Марка                Год выпуска   Мощность     Цена(руб)     \n");
        printf("+---------------------+-----------+-----------+---------------+\n");
        for (int i = 0; i < N; i++) {
            printf(" %-20s     %-10d   %-10d   %-14d \n",
                    cars[i].brand, cars[i].year, cars[i].pow, cars[i].price);
        }
        printf("+---------------------+-----------+-----------+---------------+\n");
    } 
    else if(i == 2){
        int swapped;
        for (int i = 0; i < N - 1; i++) {
            swapped = 0;
            for (int j = 0; j < N - i - 1; j++) {
                if (cars[j].pow > cars[j + 1].pow) {
                    Car temp = cars[j];
                    cars[j] = cars[j + 1];
                    cars[j + 1] = temp;
                    swapped = 1;
                }
            }
            if (!swapped) break;
        }
        printf("+---------------------+-----------+-----------+---------------+\n");
        printf("  Марка                Год выпуска   Мощность     Цена(руб)     \n");
        printf("+---------------------+-----------+-----------+---------------+\n");
        for (int i = 0; i < N; i++) {
            printf(" %-20s     %-10d   %-10d   %-14d \n",
                    cars[i].brand, cars[i].year, cars[i].pow, cars[i].price);
        }
        printf("+---------------------+-----------+-----------+---------------+\n");   
    }
    else if(i == 3){
        int swapped;
        for (int i = 0; i < N - 1; i++) {
            swapped = 0;
            for (int j = 0; j < N - i - 1; j++) {
                if (cars[j].price > cars[j + 1].price) {
                    Car temp = cars[j];
                    cars[j] = cars[j + 1];
                    cars[j + 1] = temp;
                    swapped = 1;
                }
            }
            if (!swapped) break;
        }
        printf("+---------------------+-----------+-----------+---------------+\n");
        printf("  Марка                Год выпуска   Мощность     Цена(руб)     \n");
        printf("+---------------------+-----------+-----------+---------------+\n");
        for (int i = 0; i < N; i++) {
            printf(" %-20s     %-10d   %-10d   %-14d \n",
                    cars[i].brand, cars[i].year, cars[i].pow, cars[i].price);
        }
        printf("+---------------------+-----------+-----------+---------------+\n");
    }
    else{
        printf("\nК сожалению выбора не было произведенно или он неккоректный!");
    }
}