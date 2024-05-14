#include <stdio.h>
#include <string.h>
#include <stdbool.h> 
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

char text[30];
int selection;
bool loop = true;

enum gatesNames {
    surender = 1,
    equate = 2,
    catalog = 3,
    trust = 4,
    honor = 5,
    desire = 6,
    identity = 7,
    negative = 8
};

void getNumber() {
    loop = true;
    while (loop) {
        fgets(text, sizeof(text), stdin);
        if (atoi(text) != NULL)
        {
            selection = atoi(text);
            loop = false;
        } else {
            printf("please type a number\n");
        }
    }
}

void gate1() {
    system("clear");
    printf("Type down all of your negitive thoughts they won't be recored just let it all go\n");
    fgets(text, sizeof(text), stdin);
    printf("Thank you for letting it all go\n");
    sleep(3);
} 

void gate2() {
    
}

void gate3() {
    
}

void gate4() {
    system("clear");
    printf("Your hair looks good today.\n");
    printf("Do you feel like this is true?\n");
    printf("1.Yes\n");
    printf("2.No\n");
        
    gate4choice1:
    fgets(text, sizeof(text), stdin);
    

    if (strcmp(text, "1") == 10) {
        system("clear");
        printf("Good Job Taking the Compliment!\n");
        sleep(3);
    }
    else if (strcmp(text, "2") == 10) {  
        printf("But your hair does look good! Let's try another one.\n");
        printf("Your facial structure is very pleasent\n");
        printf("1.Yes\n");
        printf("2.No\n");

        gate4choice2:
        fgets(text, sizeof(text), stdin);

        if (strcmp(text, "1") == 10) {
            printf("Good Job Taking the Compliment!\n");
            sleep(3);
        }
        else if (strcmp(text, "2") == 10) {  
            printf("Ok, well I think you should start to always accept the compliments given to you. They are just trying to be nice!");
            sleep(3);
        }
        else {
            goto gate4choice2;
        }
    }
    else {
        goto gate4choice1;
    }
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
    
    if (gate1complete && gate2complete & gate3complete && gate4complete && gate5complete && gate6complete && gate7complete && gate8complete){
        return 0;
    }

    system("clear");
    printf("You find your self sourneded by many gates, the gates read\n");
    printf("1. The gate of Surender\n");
    printf("2. The gate of Equate\n");
    printf("3. The gate of Catalog\n");
    printf("4. The gate of Trust\n");
    printf("5. The gate of Honor\n");
    printf("6. The gate of Desire\n");
    printf("7. The gate of Identity\n");
    printf("8. The gate of Negative\n");
    printf("Please type the number of the gate you want\n");
    fgets(text, sizeof(text), stdin);

    if (strcmp(text, "1") == 10) {
        if (gate1complete){
            system("clear");
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
            system("clear");
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
            system("clear");
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
            system("clear");
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
            system("clear");
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
            system("clear");
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
            system("clear");
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
            system("clear");
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
}