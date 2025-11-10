#include <stdio.h>
#include <ctype.h>
#include <windows.h>

int main(void) {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int mynumber;
    int i = 1;
    int sum = 0;
    printf("Your number:");
    scanf("%d", &mynumber);
    while (i < 101) {
        if (i != mynumber && i != 33) {
            sum += i;
        }

        i++;
    }
        printf("sum = %d", sum);
        return 0;

}
