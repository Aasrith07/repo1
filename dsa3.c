#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

// void createelement(struct node* stack, int d)
// {
//     struct node* ptr;
//     ptr -> data = d;
//     ptr -> next = NULL;

//     while(stack->next!= NULL)
//     {
//         stack = stack->next;
//     }

//     stack->next = ptr;
// }
int isempty(struct node* top)
{
    if(top == NULL)
    {
        return 1;
    }
    else
    return 0;
}

int isfull(struct node* top)
{
    struct node* n = malloc(sizeof(struct node));
    if(n == NULL)
    {
        return 1;
    }
    else 
    return 0;
}
struct node* push(struct node* top, int x)
{
    struct node* n = malloc(sizeof(struct node));
    if(isfull(top))
    printf("stack overflow");
    else
    {
        n->data = x;
        n -> next = top;
        top = n;
    }
    return top;
}

int pop(struct node** top)
{
    if(isempty(*top))
    printf("stack underflow");
    else{
        struct node* n = *top;
        *top = (*top) ->next;
        int x = n->data;
        free(n);
        return x;
    }
}

void checkingparenthesis(struct node* top)
{
    
}
int main()
{
    int a;
    struct node* top = malloc(sizeof(struct node));
    struct node* one = malloc(sizeof(struct node));
    struct node* two = malloc(sizeof(struct node));
    struct node* three = malloc(sizeof(struct node));
    struct node* four = malloc(sizeof(struct node));
    struct node* five = malloc(sizeof(struct node));
    struct node* six = malloc(sizeof(struct node));
    struct node* seven = malloc(sizeof(struct node));

    top = one;
    one -> data = 10;
    two -> data = 20;
    three -> data = 30;
    four -> data = 40;
    five -> data = 50;
    six -> data = 60;
    seven ->data = 70;

    one -> next = two;
    two -> next = three;
    three -> next = four;
    four -> next = five;
    five -> next = six;
    six -> next = seven;
    seven ->next = NULL;

    a = pop(&top);
    top = push(top, 100);
    while(top->next != NULL)
    {
        printf("%i",top->data);
        top = top->next;
    }

return 0;
}