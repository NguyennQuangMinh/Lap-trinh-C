#include <stdio.h>

int main() {
    long long a, b, k;
    scanf("%lld %lld %lld", &a, &b, &k);

    long long pos;
    if (k % 2 == 0) {
        pos = (k / 2) * (a - b);
    } else {
        pos = (k / 2 + 1) * a - (k / 2) * b;
    }

    printf("%lld\n", pos);
    return 0;
}

