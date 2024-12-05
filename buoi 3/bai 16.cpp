#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);
    int count = 0;
    while (n) {
        int t = n % 10;
        if (t != 1 && t != 0) {
            if (t == 3 || t == 2) count++;
            else if (t % 3 != 0 && t % 2 != 0) {
                count++;
            }
        }
        n /= 10;
    }
    printf("%d", count);
    return 0;
}

