#include <stdio.h>

int main() {
    int t1, t2, t3;
    scanf("%d %d %d", &t1, &t2, &t3);
    float totaltime = 1.0 / (1.0 / t1 + 1.0 / t2 + 1.0 / t3);
    printf("%.2f\n", totaltime);
    return 0;
}

