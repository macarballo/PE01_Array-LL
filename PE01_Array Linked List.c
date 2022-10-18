#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAXSIZE 20

struct {
    int list[MAXSIZE];
    int data, pos, length;
    struct node *next;
} arrayList;

// function prototypes
void mainMenu();
void addMenu();

int main(){ 
    arrayList.length = 0;
    int myArray[MAXSIZE];

    int choice, addWhere;

    while (1) {
        mainMenu(); 
        printf("\nEnter choice: ");
        scanf("%d", &choice); 
        printf("Your choice is %d", choice); 

        switch (choice){
            case 1:
                addMenu();
                printf("\nEnter choice: ");
                scanf("%d", &addWhere);
                printf("Your choice is %d", addWhere); 

                switch (addWhere){
                case 1:
                    break;
                case 3:
                    break;
                default:
                    break;
                }
            break;
        
        default:
            printf("Invalid input! Try again.");
            break;
        }
    }
    return 0;    
} 

void mainMenu(){
    printf("\n");
    printf("\nList MENU\n");
    printf("    [1] Add Item\n");
    printf("    [2] Delete Item\n");
    printf("    [3] Display List\n");
    printf("    [4] Delete List\n");
    printf("    [0] Exit Program\n");
}

void addMenu(){
    printf("\n");
    printf("\nWhere to add the item?\n");
    printf("    [1] Start of the list\n");
    printf("    [2] End of the list\n");
    printf("    [3] Specific position\n");
    printf("    [0] Cancel\n");
}

void createNode(){
    int item;

    printf("\nEnter item to be added: ");
    scanf("%d", &item);
    arrayList.list[arrayList.length] = item;
    arrayList.length++;
}