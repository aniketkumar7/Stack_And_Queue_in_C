// This contains a C program of Simple Queue using Linked List.

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *front = NULL, *rear = NULL;

//To insert node in Simple Queue
void insert(void)
{
    struct node *New;
    New = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value of the node : ");
    scanf("%d", &New->info);
    New->next = NULL;
    if (New == NULL)
    {
        printf("The Queue is small ");
        printf("\n");
    }
    else
    {
        if (front == NULL)
        {
            front = New;
            rear = New;
        }
        else
        {
            rear->next = New;
            rear = New;
        }
    }
}

//To delete node from Simple Queue
void delete(void)
{
    struct node *ptr;
    if (front == NULL)
    {
        printf("No element is present to delete");
        printf("\n");
    }
    else
    {
        printf("%d is deleted ", front->info);
        printf("\n");
        ptr = front;
        if (front->next == NULL)
        {
            front = NULL;
            rear = NULL;
        }
        else
        {
            front = front->next;
            free(ptr);
        }
    }
}

//To display the elements in the Simple Queue
void display(void)
{
    struct node *ptr;
    ptr = front;
    if (front == NULL)
    {
        printf("Queue is empty ");
        printf("\n");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("Element present in Queue is : %d", ptr->info);
            ptr = ptr->next;
            printf("\n");
        }
    }
}

//main function
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
