#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, s;
    scanf("%d %d %d", &a, &b, &s);

    int distance = abs(a) + abs(b);

    if (s >= distance && (s - distance) % 2 == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

