#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *Front = NULL, *Rear = NULL;

void insert(void)
{
    struct node *New;
    New = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value of the node : ");
    scanf("%d", &New->info);
    if (Front == NULL)
    {
        Front = New;
        Rear = New;
        Rear->next = New;
    }
    else
    {
        Rear->next = New;
        Rear = New;
        Rear->next = Front;
    }
}

void delete(void)
{
    struct node *ptr;
    if (Front == NULL)
        printf("Underflow\n");
    else
    {
        printf("%d is deleted\n", Front->info);
        ptr = Front;
        if (Front == Rear)
        {
            Front = Rear = NULL;
            free(ptr);
        }
        else
        {
            Front = Front->next;
            Rear->next = Front;
            free(ptr);
        }
    }
}

void display(void)
{
    struct node *ptr;
    if (Front == NULL)
        printf("Queue is Empty\n");
    else
    {
        ptr = Front;
        printf("Element present in queue is : %d\n", ptr->info);
        ptr = ptr->next;
        while (ptr != Front)
        {
            printf("Element present in queue is : %d\n", ptr->info);
            ptr = ptr->next;
        }
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
            insert();
            break;
        case 2:
            delete ();
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