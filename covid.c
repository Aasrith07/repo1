#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct node {
    int x;
    int spread;
    struct node* next;
    struct node* prev;
};
struct node* insertatend(struct node* head, int data)
{
    struct node* newnode = malloc(sizeof(struct node));
    newnode -> x = data;
    head -> next = newnode;
    newnode -> prev = head;
    newnode -> next = NULL;
}

void findingspread(struct node* head)
{
    struct node* ptr = malloc(sizeof(struct node));
    struct node* ptr1 = malloc(sizeof(struct node));
    struct node* ptr2 = malloc(sizeof(struct node));
    ptr= head;

    while(ptr != NULL)
    {
        int count=0;
        ptr1 = ptr;
        ptr2 = ptr1 ->next;
        while(ptr1->next != NULL)
        {
            if(abs(ptr1->x - ptr2->x) < 3)
            {
                count+=1;
                ptr1 = ptr2;
                ptr2 = ptr2 ->next;
            }
            else
            break;
        }
        ptr -> spread = count;
        ptr = ptr-> next;
    }   
}

int findingmaximum(struct node* head)
{
    int max;
    struct node* ptr= malloc(sizeof(struct node));
    ptr = head;
    struct node* ptr1= malloc(sizeof(struct node));
    max = ptr->spread;
    while(ptr->next = NULL)
    {
        ptr1 = ptr-> next;
        if(max < ptr1->spread)
        {
            max = ptr1->spread;
        }
        else
        {
            max;
        }
        ptr = ptr->next;
    }
    return max;
}

int findingminimum(struct node* head)
{
    int min;
    struct node* ptr = malloc(sizeof(struct node));
    ptr = head;

    struct node* ptr1 = malloc(sizeof(struct node));
    min = ptr->spread;
    while(ptr->next = NULL)
    {
        ptr1 = ptr-> next;
        if(min > ptr1->spread)
        {
            min = ptr1->spread;
        }
        else
        {
            min;
        }
        ptr = ptr->next;
    }
    return min;
}

// void deletell(struct node* head)
// {
//     struct node*ptr;
//     struct node* ptr1;
//     struct node* ptr2;

//     ptr = head;
//     ptr1 = ptr->next;
//     while(ptr1 -> next!= NULL)
//     {       
//         ptr2 = ptr1->next;
//         free(ptr1);
//         ptr1 = ptr2;
//     }
//     free(ptr);
// }
int main()
{
    int testcases,n;
    int x;
    int max;
    int min;
    scanf("%i",&testcases);
    for(int j = 0;j++;j<testcases)
    {
        struct node* head = malloc(sizeof(struct node));
        struct node* head2 = malloc(sizeof(struct node));
        head2 = head;
        scanf("%i",&n);
        for(int i=0;i++;i<n)
        {
            scanf("%i",&x);
            insertatend(head,x);
            head =  head-> next; 
        }

        findingspread(head2);
        max = findingmaximum(head2);
        min = findingminimum(head2);
        printf("%i %i",min,max);
        
        // deletell(head2);
    }

    return 0;
}