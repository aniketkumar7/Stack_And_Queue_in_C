#include <stdio.h>

int Queue[100];
int rear = -1;
int front = -1;
// number of elements in queue
int n;



// To insert an element in the circular queue

void insert(void)
{
    if (front == (rear + 1) % n)
    {
        printf("The Queue is small ");
        printf("\n");
    }
    else
    {
        if (rear == -1)
        {
            rear = 0;
            front = 0;
        }
        else
            rear = (rear + 1) % n;
        printf("Enter the value in the queue : \t");
        scanf("%d", &Queue[rear]);
    }
}


// To delete an element from the  circular queue

void delete(void)
{
    if (front == -1)
    {
        printf("No element is present to delete");
        printf("\n");
    }
    else
    {
        printf("%d is deleted", Queue[front]);
        printf("\n");
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
            front = (front + 1) % n;
    }
}


// To display the elements in the circular queue

void display(void)
{
    int i;
    if (rear == -1)
    {
        printf("Queue is empty ");
        printf("\n");
    }       
    else
    {
        for (i = front; i != rear; i = (i+1)%n)
        {
            printf(" Element present in Queue is : %d", Queue[i]);
            printf("\n");
        }
        printf(" Element present in Queue is : %d\n", Queue[i]);
    }
}


// main function

int main()
{
    int a;

    int c = 10;

    printf("Enter the size of the Queue :\t");
    scanf("%d", &n);

    while (c == 10)
    {
        printf("Enter 1 for Insert Element in the Queue :  ");
        printf("\n");
        printf("Enter 2 for Delete Element from the Queue :  ");
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
        printf("Enter 10 for continue : ");
        scanf("%d", &c);
        printf("\n");
    }
    return 0;
}
