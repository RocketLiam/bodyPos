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
    bool gate1complete = false;
    bool gate2complete = false;
    bool gate3complete = false;
    bool gate4complete = false;
    bool gate5complete = false;
    bool gate6complete = false;
    bool gate7complete = false;
    bool gate8complete = false;
    start:
    printf("\e[1;1H\e[2J");
    printf("You find your self surounded by many gates, the gates read\n1. EXIT\n2.\n3.\n");
    printf("State the number of the gate you'd like to walk through\n");
    fgets(text, sizeof(text), stdin);

    if (strcmp(text, "1") == 10) {
        if (gate1complete){
            printf("\e[1;1H\e[2J");
            printf("This gate has been completed\nPress Enter to continue\n");
            fgets(text, sizeof(text), stdin);
            goto start;
        }
        gate1();
        gate1complete = true;
        goto start;
    } 
    else if (strcmp(text, "2") == 10) {
        if (gate2complete){
            printf("\e[1;1H\e[2J");
            printf("This gate has been completed\nPress Enter to continue\n");
            fgets(text, sizeof(text), stdin);
            goto start;
        }
        gate2();
        gate2complete = true;
        goto start;
    } 
    else if (strcmp(text, "3") == 10) {
        if (gate3complete){
            printf("\e[1;1H\e[2J");
            printf("This gate has been completed\nPress Enter to continue\n");
            fgets(text, sizeof(text), stdin);
            goto start;
        }
        gate3();
        gate3complete = true;
        goto start;
    } 
    else if (strcmp(text, "4") == 10) {
        if (gate4complete){
            printf("\e[1;1H\e[2J");
            printf("This gate has been completed\nPress Enter to continue\n");
            fgets(text, sizeof(text), stdin);
            goto start;
        }
        gate4();
        gate4complete = true;
        goto start;
    } 
    else if (strcmp(text, "5") == 10) {
        if (gate5complete){
            printf("\e[1;1H\e[2J");
            printf("This gate has been completed\nPress Enter to continue\n");
            fgets(text, sizeof(text), stdin);
            goto start;
        }
        gate5();
        gate5complete = true;
        goto start;
    } 
    else if (strcmp(text, "6") == 10) {
        if (gate6complete){
            printf("\e[1;1H\e[2J");
            printf("This gate has been completed\nPress Enter to continue\n");
            fgets(text, sizeof(text), stdin);
            goto start;
        }
        gate6();
        gate6complete = true;
        goto start;
    } 
    else if (strcmp(text, "7") == 10) {
        if (gate7complete){
            printf("\e[1;1H\e[2J");
            printf("This gate has been completed\nPress Enter to continue\n");
            fgets(text, sizeof(text), stdin);
            goto start;
        }
        gate7();
        gate7complete = true;
        goto start;
    } 
    else if (strcmp(text, "8") == 10) {
        if (gate8complete){
            printf("\e[1;1H\e[2J");
            printf("This gate has been completed\nPress Enter to continue\n");
            fgets(text, sizeof(text), stdin);
            goto start;
        }
        gate8();
        gate8complete = true;
        goto start;
    }
    else {
        goto start;
    }
    return 0;
}