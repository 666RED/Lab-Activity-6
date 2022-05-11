#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 3

int stack[MAX], top = -1;

void push(int stack[], int);
int pop(int stakc[]);
int peek(int stack[]);
void display(int stack[]);

int main(){
    int value, option;
    do{
        printf("\n******MAIN MENU*****");
        printf("\n 1. PUSH");
        printf("\n 2. POP");
        printf("\n 3. PEEK");
        printf("\n 4. DISPLAY");
        printf("\n 5. EXIT");

        printf("\n\n Enter your option: ");
        scanf("%d", &option);
        switch(option){
            case 1:
                printf("\n Enter the number to be pushed on stack: ");
                scanf("%d", &value);
                push(stack, value);
                break;
            case 2:
                value = pop(stack);
                if(value != -1){
                    printf("\n The value deleted from stack is: %d", value);
                }
                break;
            case 3:
                value = peek(stack);
                if(value != -1){
                    printf("\n The value stored at top of stack is: %d", value);
                }
                break;
            case 4:
                display(stack);
                break;
        }
    }while(option != 5);
}

void push(int stack[],int value){
    if(top == MAX - 1){
        printf("\n Stack overflow.");
    }else{
        top++;
        stack[top] = value;
    }
}

int pop(int stakc[]){
    int value;
    if(top == -1){
        printf("\n Stack underflow.");
    }else{
        value = stack[top];
        top--;
        return value;
    }
}

int peek(int stack[]){
    if(top == -1){
        printf("\n Stack is empty.");
        return -1;
    }else{
        return stack[top];
    }
}

void display(int stack[]){
    if(top == -1){
        printf("\n Stack is empty.");
    }else{
        for(int i = top; i >= 0; i--){
            printf("\n %d", stack[i]);
            printf("\n");
        }
    }
}

















