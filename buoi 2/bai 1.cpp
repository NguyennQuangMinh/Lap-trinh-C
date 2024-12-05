#include <stdio.h>

int main() {
    long long n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);

    long long num_tiles_n = (n + a - 1) / a;
    long long num_tiles_m = (m + a - 1) / a;

    long long total_tiles = num_tiles_n * num_tiles_m;

    printf("%lld\n", total_tiles);
    
    return 0;
}
