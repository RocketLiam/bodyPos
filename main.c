#include <stdio.h>
#include <string.h>
#include <stdbool.h> 

char text[30];

enum gatesNames {
    awesome
} gate;

void gate1() {
    printf("\e[1;1H\e[2J");
    printf("This is the exit gate. Let all of your negative thoughts escape your mind.\n");
    printf("You can write down all of your negative thoughts now, don't worry, they won't be saved.\n");
    fgets(text, sizeof(text), stdin);
}

void gate2() {
    
}

void gate3() {
    
}

void gate4() {
    
}

void gate5() {
    
}

void gate6() {
    
}

void gate7() {
    
}

void gate8() {
    
}

int main(int argc, char const *argv[])
{
    _Bool gate1complete = alse;
    start:
    printf("\e[1;1H\e[2J");
    printf("You find your self surounded by many gates, the gates read\n1. EXIT\n2.\n3.\n");
    printf("State the number of the gate you'd like to walk through");
    fgets(text, sizeof(text), stdin);
    printf("You have stated %s", text);

    if (strcmp(text, "1") == 10) {
        gate1();
        goto start;
    } 
    else if (strcmp(text, "2") == 10) {
        gate2();
        goto start;
    } 
    else if (strcmp(text, "3") == 10) {
        gate3();
        goto start;
    } 
    else if (strcmp(text, "4") == 10) {
        gate4();
        goto start;
    } 
    else if (strcmp(text, "5") == 10) {
        gate5();
        goto start;
    } 
    else if (strcmp(text, "6") == 10) {
        gate6();
        goto start;
    } 
    else if (strcmp(text, "7") == 10) {
        gate7();
        goto start;
    } 
    else if (strcmp(text, "8") == 10) {
        gate8();
        goto start;
    }
    else {
        goto start;
    }
    return 0;
}