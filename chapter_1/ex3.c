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

    ratio = 5.0 / 9.0;

    fahr = lower;

    printf("This is a simple program that converts\n");
    printf("Celsius to Fahrenheit in decimal format\n");

    while (fahr <= upper) {
        celsius = ratio * (fahr - 32);
        printf("Celsius: %6.2f Fahrenheit: %3.1f\n", celsius, fahr);
        fahr = fahr + step;
    }
    return 0;
}