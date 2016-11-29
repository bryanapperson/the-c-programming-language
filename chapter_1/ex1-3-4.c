#include <stdio.h>

int main(int argc, char *argv[]) {
    double fahr, celcius;
    int lower, upper, step;
    double ratio;

    lower = 0;
    upper = 300;
    step = 20;

    ratio = 5.0 / 9.0;

    fahr = lower;

    printf("This is a simple program that converts\n");
    printf("Celcius to Fahrenheit in decimal format\n");

    while (fahr <= upper) {
        celcius = ratio * (fahr - 32);
        printf("Celcius: %6.2f Fahrenheit: %3.1f\n", celcius, fahr);
        fahr = fahr + step;
    }

    celcius = lower;
    ratio = 9.0 / 5.0;

    printf("Now let's print the reverse\n");

    while (celcius <= upper) {
        fahr = celcius * ratio + 32;
        printf("Fahrenheit: %6.2f Celcius: %3.1f\n", fahr, celcius);
        celcius = celcius + step;
    }

    return 0;
}
