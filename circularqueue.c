#include <stdio.h>
#include <stdlib.h>

struct circularqueue {
    int size;
    int r;
    int f;
    int* arr;
};



int isfull(struct circularqueue *q)
{
    if((q->r+1)%q->size == q->f)
    {
        return 1;
    }
    return 0;
}

int isempty(struct circularqueue* q)
{
    if(q->r == q->f)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct circularqueue *q, int val)
{
    if(isfull(q)){
        printf("circular queue is filled");
    }
    else{
        q -> r = (q->r+1)% q->size;
        q->arr[q->r] = val;
        printf("value entered is %d",val);
    }
}
int dequeue(struct circularqueue *q)
{
    int a = -1;
    if(isempty(q))
    {
        printf("queue is empty");
    }
    else{ 
        q->f = (q->f+1)%q->size;
        a = q->arr[q->f];
    }
    return a;
}


int main()
{
    int a;
    struct circularqueue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = malloc(q.size*sizeof(int));

    // Enqueue few elements
    enqueue(&q,12);
    enqueue(&q,15);
    enqueue(&q,1);
    enqueue(&q,10);
    // printf("Dequeuing element %d\n", a = dequeue(&q));
    // printf("Dequeuing element %d\n",a = dequeue(&q));
    // printf("Dequeuing element %d\n",a = dequeue(&q));
    // enqueue(&q, 45);
    enqueue(&q, 45);
    enqueue(&q, 45);

    // if(isempty(&q)){
    //     printf("queue is empty\n");
    // }
    // if(isfull(&q)){
    //     printf("queue is full\n");
    // }

    return 0;
}