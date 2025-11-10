#include <stdio.h>
#include <ctype.h>
#include <windows.h>

int main(void) {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    char text[100];
    int Hol = 0, Pr = 0;


    printf("\nВведіть речення англійською:\n> ");


    if (fgets(text, 100, stdin)) {
        for (int i = 0; text[i] != '\0'; i++) {
            char c = tolower((unsigned char)text[i]);
            if (isalpha((unsigned char)c)) {
                if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') Hol++;
                else Pr++;
            }
        }
    }

    printf("Голосних: %d, приголосних: %d\n", Hol, Pr);
    return 0;
}