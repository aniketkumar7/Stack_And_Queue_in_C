// This reposistory contains the source code of implementation of Stack using Linked List in C Language.

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *Top = NULL;

void push(void)
{
    struct node *New;
    New = (struct node *)malloc(sizeof(struct node));
    if (New == NULL)
        printf("Overflow\n");
    else
    {
        printf("Enter the value of the node : ");
        scanf("%d", &New->info);
        New->next = Top;
        Top = New;
    }
}

void pop(void)
{
    struct node *Ptr;
    if (Top == NULL)
        printf("Underflow\n");
    else
    {
        Ptr = Top;
        Top = Top->next;
        printf("%d id deleted\n", Ptr->info);
        free(Ptr);
    }
}

void display(void)
{
    struct node *Ptr;
    Ptr = Top;
    if (Top == NULL)
        printf("Stack is empty\n");
    while (Ptr != NULL)
    {
        printf("%d\n", Ptr->info);
        Ptr = Ptr->next;
    }
}

// main function
int main()
{
    int a;
    char c = 'y';

    while (c == 'y' || c == 'Y')
    {
        printf("Enter 1 for Insert in the Queue :  ");
        printf("\n");
        printf("Enter 2 for Delete the Queue :  ");
        printf("\n");
        printf("Enter 3 for Display the Queue :  ");
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
        printf("Enter y or Y for continue : ");
        scanf("%s", &c);
        printf("\n");
    }
    return 0;
}
