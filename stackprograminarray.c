#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


#define MAXSIZE 10

void push();
void pop();
void display();

int stack[MAXSIZE], top = -1;

int main() {
    int cho;
    do {
        getch();
        system("cls");

        printf("\n\n\n<-----------------Stack ------------------>\n");
        printf(" [1] Push\n");
        printf(" [2] Pop\n");
        printf(" [3] Display\n");
        printf(" [0] Exit\n");
        printf("<=========================================>\n");
        printf("Enter any Number : ");
        scanf("%d", &cho);

        switch (cho) {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 0:
            exit(0); 
            break;
        default:
            printf("Wrong input !");
            break;
        }
    } while (cho != 0);
}

void push() {
    int n;
    if (top == MAXSIZE - 1) {
        printf("\nStack Overflow !");
    } else {
        printf("Enter an element: ");
        scanf("%d", &n);

        top++;
        stack[top] = n;

        printf("\nElement is Pushed:\n");
        display();
    }
}

void pop() {
    int num;
    if (top == -1) {
        printf("\nStack is empty.");
    } else {
        num = stack[top];
        top--;
        printf("\n[ %d ] is POP from stack !\n", num);
        display();
    }
}

void display() {
    if (top == -1) {
        printf("\nStack is empty ☹️\n");

        for (int i = 0; i < MAXSIZE; i++) {
            printf("\n |      |");
        }
        printf("\n --------");
    } else {
        printf("Stack Elements:\n");
        
        
        for (int i = MAXSIZE - 1; i > top; i--) {
            printf("\n |      |");
        }

        
        for (int i = top; i >= 0; i--) {
            printf("\n | %4d |", stack[i]);
        }
        printf("\n --------");
    }
}
