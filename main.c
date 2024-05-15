#include <stdio.h>
#include <string.h>
#include <stdbool.h> 
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <ctype.h>

char text[30];
int selection;
bool loop = true;

void gate1() {
    system("clear");
    printf("Type down all of your negitive thoughts they won't be recored just let it all go\n");
    fgets(text, sizeof(text), stdin);
    printf("Thank you for letting it all go\n");
    sleep(3);
} 

void gate2() {
    system("clear");
    printf("Who is someone that you look up to\n");
    fgets(text, sizeof(text), stdin);
    printf("Do you feel like you are worse in the world because they exist?\n");
    printf("1.yes\n");
    printf("2.no\n");
     fgets(text, sizeof(text), stdin);
    if (strcmp(text, "1") == 10) {
        system("clear");
        printf("Don't do this to your self you add a ton of value to the world.\n");
        sleep(3);
    }
    if (strcmp(text, "2") == 10) {
        system("clear");
        printf("Good you are awesome and don't need to compare your self to them\n");
        sleep(3);
    }
}

void gate3() {
    int traits = 0;
    system("clear");
    printf("Here you get to write all of your wonderful traits!\n");
    printf("I'll give you a notecard, just write down 15 positive things about yourself!\n");
    sleep(3);
    char trait[15][30] = {};
    notecard:
    system("clear");
    for (int i = 0; i < 15; i++) {
        printf("%d.%s\n", i+1, trait[i]);
    }
    if (traits == 15) {
        printf("Now look at all of these positive traits you were able to come up with!\n");
        sleep(5);
    }
    if (traits != 15) {
        fgets(text, sizeof(text), stdin);
        strncpy(trait[traits], text, strlen(text)-1);
        traits+=1;
        goto notecard;
    }
}

void gate4() {
    system("clear");
    printf("Your hair looks good today!\n");
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
        printf("Your facial structure is very pleasant\n");
        printf("1.Yes\n");
        printf("2.No\n");

        gate4choice2:
        fgets(text, sizeof(text), stdin);

        if (strcmp(text, "1") == 10) {
            printf("Good Job Taking the Compliment!\n");
            sleep(3);
        }
        else if (strcmp(text, "2") == 10) {  
            printf("I think you should try to accept the compliments given to you. They are just trying to be nice!\n");
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
    int timer = 60;
    system("clear");
    printf("Take a minute to reflect about what you've accomplished now, and what you've overcome.\n");
    sleep(3);
    while (timer > 0) {
        system("clear");
        printf("%01d:%02d\n", timer / 60, timer % 60);
        sleep(1);
        timer--;
    }
    printf(":)\n");
    sleep(3);
}

void gate6() {
    system("clear");
    printf("When you are setting goals for yourself, it can be easy to get carried away.\n");
    sleep(1);
    printf("In order to make your goals realistic, you need to have a SMART one.\n");
    sleep(1);
    printf("SMART is an acronym, standing for:\n");
    sleep(1);
    printf("Specific\n");
    sleep(1);
    printf("Measurable\n");
    sleep(1);
    printf("Achievable\n");
    sleep(1);
    printf("Relevant\n");
    sleep(1);
    printf("Time Based\n");
    sleep(2);
    system("clear");
    goto quiz;

    retell:
    system("clear");
    printf("When you are setting goals for yourself, it can be easy to get carried away.\n");
    printf("In order to make your goals realistic, you need to have a SMART one.\n");
    printf("SMART is an acronym, standing for:\n");
    printf("\nSpecific\n");
    printf("Measurable\n");
    printf("Achievable\n");
    printf("Relevant\n");
    printf("Time Based\n");
    sleep(2);
    system("clear");

    quiz:
    printf("So, knowing that, what kind of goals should you make from now on? (use the acronym)\n");
    fgets(text, sizeof(text), stdin);

    for(int i = 0; text[i]; i++){
        text[i] = tolower(text[i]);
    }
    if (strcmp(text, "smart") != 10) {
        printf("Incorrect, no worries, let's look at the info again\n");
        sleep(2);
        goto retell;
    }
    else {
        printf("Correct! Remember to use SMART goals in the future\n");
    }
}

void gate7() {
    char thing1[30];
    char thing2[30];
    char thing3[30];
    system("clear");
    printf("what is your name?\n");
    fgets(thing1, sizeof(thing1), stdin);
    printf("What is the thing that best discribes you?\n");
    fgets(thing2, sizeof(thing2), stdin);
    printf("What is your favorite thing to do?\n");
    fgets(thing3, sizeof(thing3), stdin);
    thing1[strlen(thing1) - 1] = '\0';
    thing2[strlen(thing2) - 1] = '\0';
    thing3[strlen(thing3) - 1] = '\0';
    printf("%s is a person this is very %s and is very good at %s\n",thing1,thing2,thing3);
    sleep(5);
}

void gate8() {
    system("clear");
    printf("Here you will practice making decisions for yourself\n");
    printf("You don't need to say yes to everyone. Practice saying no, for a change.\n");
    sleep(4);
    yn1:
    system("clear");
    printf("Hey! Can you take my shift at work tonight for me? It's only 5 hours.\n");
    printf("Yes/No\n");
    fgets(text, sizeof(text), stdin);

    for(int i = 0; text[i]; i++){
        text[i] = tolower(text[i]);
    }
    if (strcmp(text, "no") == 10) {
        printf("Nice job! You don't have to help everyone out, especially if it hurts you.\n");
        sleep(3);
        goto end;
    }
    else if (strcmp(text, "yes") == 10) {
        printf("Did you really want to take that shift? You don't have to do things just to please other people. Help yourself out!\n");
        sleep(3);
    }
    else {
        goto yn1;
    }
    yn2:
    system("clear");
    printf("Hey, could you skip that party of yours to run get my groceries?\n");
    printf("Yes/No\n");
    fgets(text, sizeof(text), stdin);
    
    for(int i = 0; text[i]; i++){
        text[i] = tolower(text[i]);
    }
    if (strcmp(text, "no") == 10) {
        printf("Nice job! You don't have to help everyone out, especially if doesn't work for you.\n");
        sleep(3);
        goto end;
    }
    else if (strcmp(text, "yes") == 10) {
        printf("You don't have to change your plans for other people, especially if it was something important to you. Howabout we try that again?\n");
        sleep(3);
        goto yn1;
    }
    else {
        goto yn2;
    }
    end:
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
        printf("You've done it! You went through all 8 gates, and learned how to appreciate yourself for who you are.\n");
        printf("Be proud of yourself :)\n");
        sleep(5);
        return 0;
    }

    system("clear");
    printf("You find your self surounded by many gates. The gates read:\n");
    printf("1. The gate of Surrender\n");
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