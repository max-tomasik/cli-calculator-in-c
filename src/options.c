#include <stdio.h>
#include "../include/options.h"

int options() {
    int optionselection;

    printf("Option 1: addition\n");
    printf("Option 2: subtraction\n");
    printf("Option 3: multiplication\n");
    printf("Option 4: division\n");

    scanf("%d", &optionselection);

    if (optionselection == 1) {
        printf("Addition selected\n");
    } else if (optionselection == 2) {
        printf("Subtraction selected\n");
    } else if (optionselection == 3) {
        printf("Multiplication selected\n");
    } else if (optionselection == 4) {
        printf("Division selected\n");
    } else {
        printf("Invalid option\n");
    }

    return optionselection;
}

