This is a C program of implementation of Stack using Array. 

#include <stdio.h>
#include <stdlib.h>
int stack[50];
int top = -1;
int n;

void push(void)
{
    if (top == n - 1)
        printf("Overflow\n");
    else
    {
        top = top + 1;
        printf("Enter the value in the stack : ");
        scanf("%d", &stack[top]);
    }
}

void pop(void)
{
    if (top == -1)
        printf("Underflow\n");
    else
    {
        printf("%d is deleted\n", stack[top]);
        top = top - 1;
    }
}

void display(void)
{
    int i;
    if (top == -1)
        printf("Stack is Empty \n");
    else
    {
        for (i = 0; i < n; i++)
            printf("%d\n", stack[i]);
    }
}

int main()
{
    int a;
    int c = 10;

    printf("Enter the size of the Stack :\t");
    scanf("%d", &n);

    while (c == 10)
    {
        printf("Enter 1 for Insert in the Stack :  ");
        printf("\n");
        printf("Enter 2 for Delete elements from Stack :  ");
        printf("\n");
        printf("Enter 3 for Display the elements in the Stack :  ");
        printf("\n");
        printf("Enter the choice : ");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            printf("Enter the correct choice \n");
        }
        printf("Enter 10 for continue : ");
        scanf("%d", &c);
        printf("\n");
    }
    return 0;
}
