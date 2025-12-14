#include <stdio.h>

int options(){
    int optionselection;

    printf("option 1: addition\n");
    printf("option 2: subtraction\n");
    printf("option 3: multiplication\n");
    printf("option 4: division\n");

    scanf("%d", &optionselection);
    
    //If the value of optionselection is one it means that the user picked addition
    if (optionselection == 1){
        printf("addition selected");
    }

    //If the value of optionselection is 2 it means that the user picked subtraction
    if (optionselection == 2){
        printf("subtraction selected");
    }

    

    return optionselection;
}

int main()
{   
    options();
    return 0;
}
