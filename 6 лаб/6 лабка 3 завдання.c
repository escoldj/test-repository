#include <stdio.h>



int main() {
    int N;
    float num, sum = 0, min, max;

    do {
        printf("Print N (from 7 to 12): ");
        scanf("%d", &N);
    } while (N < 7 || N > 12);

    printf("Print %d numbers:\n", N);

    scanf("%f", &num);
    sum = min = max = num;

    for (int i = 1; i < N; i++) {
        scanf("%f", &num);
        sum += num;
        if (num < min) min = num;
        if (num > max) max = num;
    }

    printf("sum = %.2f\n", sum);
    printf("ser = %.5f\n", sum / N);
    printf("min = %.2f\n", min);
    printf("max = %.2f\n", max);

    return 0;
}