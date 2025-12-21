<<<<<<< HEAD
=======
#include <stdio.h>

>>>>>>> mybranch
void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
@@ -14,36 +9,5 @@ void bubble_sort(int arr[], int n) {
        }
    }
}
<<<<<<< HEAD
Sortirovka pusirkon - 
Konez
=======

cat > sort.c << 'EOF'
#include <stdio.h>

void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
#include <stdio.h>
void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
    int a[] = {4, 2, 0};
    int n = sizeof(a) / sizeof(a[0]);
    bubble_sort(a, n);    
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Hello Git\n");
    return 0;
}

