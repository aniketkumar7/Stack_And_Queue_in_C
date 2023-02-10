#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next, *prev;
};
struct node *f = NULL, *r = NULL;


// To insert at rear end of the Dqueue

void insertrear(void)
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value of the node : ");
    scanf("%d", &new->info);
    new->next = NULL;
    if (r == NULL)
    {
        f = new;
        r = new;
        new->prev = NULL;
    }
    else
    {
        r->next = new;
        new->prev = r;
        r = new;
    }
}


// To insert at front end of the Dqueue

void insertfront(void)
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value of the node : ");
    scanf("%d", &new->info);
    new ->prev = NULL;
    if (f == NULL)
    {
        f = new;
        r = new;
        new-> next = NULL;
    }
    else
    {
        f ->prev = new;
        new->next = f;
        f = new;
    }
}


// To delete from front end of the Dqueue

void deletefront(void)
{
    struct node *ptr;
    if(f == NULL)
    printf("Underflow\n");
    else
    {
        printf("%d is deleted\n", f ->info);
        ptr = f;
        if(f == r)
        {
            f = NULL;
            r = NULL;
        }
        else
        {
            f = f ->next;
            f ->prev = NULL;
        }
        free(ptr);
    }
}


// To delete from rear end of the Dqueue

void deleterear(void)
{
    struct node *ptr;
    if(f == NULL)
    printf("Underflow\n");
    else
    {
        printf("%d is deleted\n", r ->info);
        ptr = r;
        if(f == r)
        {
            f = NULL;
            r = NULL;
        }
        else
        {
            r = r ->prev;
            r ->next = NULL;
        }
        free(ptr);
    }
}


// To display the Dqueue

void display(void)
{
    struct node *ptr;
    ptr = f;
    while(ptr != NULL)
    {
        printf("%d\n",ptr -> info);
        ptr = ptr -> next;
    }
}


// main function
int main()
{
    int a;
    char c = 'y';

    while (c == 'y' || c == 'Y')
    {
        printf("Enter 1 for Insert at front end of Dqueue :  ");
        printf("\n");
        printf("Enter 2 for Insert at rear end of Dqueue :  ");
        printf("\n");
        printf("Enter 3 for Delete from front of the Dqueue :  ");
        printf("\n");
        printf("Enter 4 for Delete from rear end of the Dqueue :  ");
        printf("\n");
        printf("Enter 5 for Display the Dqueue  :  ");
        printf("\n");
        printf("Enter the choice : ");
        scanf("%d", &a);
        switch(a)
        {
        case 1:
            insertfront();
            break;

        case 2:
            insertrear();
            break;

        case 3:
            deletefront();
            break;

        case 4:
            deleterear();
            break;

        case 5:
            display();
            break;

        default:
            printf("Enter the correct choice  \n");
        }
        printf("Enter y or Y for continue : ");
        scanf("%s", &c);  
        printf("\n");
    }
    return 0;
}
