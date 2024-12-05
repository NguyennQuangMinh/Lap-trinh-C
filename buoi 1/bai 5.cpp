#include <stdio.h>

void sort(int arr[], int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < n-i; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int a, b, c, d, e;
    printf("Nhap 5 so nguyen: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    int numbers[5] = {a, b, c, d, e};
    sort(numbers, 5);

    printf("So nho thu nhi la: %d\n", numbers[1]);

    return 0;
}

