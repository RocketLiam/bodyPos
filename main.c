#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

char text[30];
int selection;
bool loop = true;

void start();
void getNumber();
void gate1();
void gate2();
void gate3();
void gate4(int test);
void gate5();
void gate6();
void gate7();
void gate8();

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

int main(int argc, char const *argv[])
{
    start();
    return 0;
}

void start() {
    selection = 0;
    enum gatesNames gate = 0;
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
    getNumber();
    
    
    switch (selection)
    {
    case 1:
        gate1();
        break;
    case 2:
        gate2();
        break;
    case 3:
        gate3();
        break;
    case 4:
        gate4(0);
        break;
    case 5:
        gate5();
        break;
    case 6:
        gate6();
        break;
    case 7:
        gate7();
        break;
    case 8:
        gate8();
        break;
    
    default:
        break;
    }
}

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
    start();
}
    
   

void gate2() {
    
}

void gate3() {
    
}

void gate4(int test) {
    if (test == 0)
    {
        system("clear");
        printf("Your hair looks good today\n");
        printf("Do you feel like this is true\n");
        printf("1.Yes\n");
        printf("2.No\n");
        fgets(text, sizeof(text), stdin);
        getNumber();
        
        switch (selection)
        {
        case 1:
            printf("Good Job Taking the Complement");
            sleep(3);
            start();
            break;
        case 2:
            printf("But your hair does look good lets try another one");
            test = 1;
            break;
        
        default:
            break;
        }
    }
    if (test == 1) {
        printf("Your facial structure is very pleasent\n");
        printf("1.Yes\n");
        printf("2.No\n");
        fgets(text, sizeof(text), stdin);
        getNumber();
        switch (selection)
        {
        case 1:
            printf("Good Job Taking the Complement");
            sleep(3);
            start();
            break;
        case 2:
            printf("Ok, well I think you should start to always accept the complements given to you.  They are just trying to be nice.");
            start();
            break;
        
        default:
            break;
        }
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
