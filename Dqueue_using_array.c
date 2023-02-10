#include<stdio.h>

int DQueue[50];
int front = -1, rear = -1;
int n;




// To insert at front end of the Dqueue

void InsertFront(void)
{
    if(front == 0)
    printf("Overflow \n");
    else
    {
        if(front == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        front = front - 1;
        printf("Enter the value in the Dqueue : ");
        scanf("%d",&DQueue[front]);
    }
}




// To insert at rear end of the Dqueue

void InsertRear(void)
{
    if(rear == n - 1)
    printf("Overflow\n");
    else
    {
        if(rear == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        rear = rear + 1;
        printf("Enter the value in the Dqueue : ");
        scanf("%d",&DQueue[rear]);
    }
}



// To delete from front end of the Dqueue

void DeleteFront(void)
{
    if(front == -1)
    printf("Underflow\n");
    else
    {
        printf("%d is Deleted\n",DQueue[front]);
        if(front == rear)
        {
            front = -1;
            rear = -1;
        }
        front = front + 1;
    }
}



// To delete from rear end of the Dqueue

void DeleteRear(void)
{
    if(rear == -1)
    printf("Underflow\n");
    else
    {
        printf("%d is Deleted\n",DQueue[rear]);
        if(rear == front)
        {
            front = -1;
            rear = -1;
        }
        rear = rear - 1;
    }
}



// To display the Dqueue

void display(void)
{
    int i;
    if(rear == -1)
    printf("Queue is Empty\n");
    else
    {
        for(i = front; i <= rear; i++)
        printf("Element is %d\n",DQueue[i]);
    }
}


// main function

int main()
{
    int a;
    char c = 10;
    printf("Enter the size of the Dqueue : ");
    scanf("%d",&n);

    while (c == 10)
    {
        printf("Enter 1 for Insert at Front end of Queue : \n");
        printf("Enter 2 for Insert at Rear end of Queue :  \n");
        printf("Enter 3 for Delete from Front end of Queue : \n");
        printf("Enter 4 for Delete from Rear end of Queue : \n");
        printf("Enter 5 for Display the Linked List : \n");
        printf("Enter the choice : ");
        scanf("%d", &a);
        switch(a)
        {
        case 1:
            InsertFront();
            break;

        case 2:
            InsertRear();
            break;

        case 3:
            DeleteFront();
            break;

        case 4:
            DeleteRear();
            break;

        case 5:
            display();
            break;

        default:
            printf("Enter the correct choice  \n");
        }
        printf("Enter 10 for continue : ");
        scanf("%d", &c);
        printf("\n");
    }
    return 0;
}
