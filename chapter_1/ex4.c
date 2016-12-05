//
// Created by Bryan Apperson on 12/4/16.
//
#include <stdio.h>

int main(int argc, char *argv[]) {
    float fahr, celsius;
    int lower, upper, step;
    float ratio;

    lower = 0;
    upper = 300;
    step = 20;

    ratio = 9.0 / 5.0;

    celsius = lower;

    printf("This is a simple program that converts\n");
    printf("Fahrenheit to Celsius in decimal format\n");

    while (celsius <= upper) {
        fahr = celsius * ratio + 32;
        printf("Fahrenheit: %6.2f Celsius: %3.1f\n", fahr, celsius);
        celsius = celsius + step;
    }
    return 0;
}