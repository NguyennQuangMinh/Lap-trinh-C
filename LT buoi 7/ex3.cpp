#include <stdio.h>

int main(){
    int tong = 0, n;
    while(1){
        printf("Nhap n : ");
        scanf("%d", &n);
        if(n < 0){
            continue; // b? qua c�c l?nh b�n du?i
        }
        else if(n == 0){
            break;
        }
        tong += n;
    }
    printf("%d\n", tong);
    return 0;
}
