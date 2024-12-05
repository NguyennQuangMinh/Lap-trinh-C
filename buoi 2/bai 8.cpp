#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int min_steps = (n + 1) / 2;

    int result = ((min_steps + m - 1) / m) * m;

    if (result <= n) {
        printf("%d\n", result);
    } else {
        printf("-1\n");
    }

    return 0;
}

