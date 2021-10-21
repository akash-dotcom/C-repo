#include<stdlib.h>
#include<stdio.h>

struct Queue{
   int size;
   int f;
   int r;
   int *arr;
};

int isEmpty(struct Queue *q){
    if(q->r==q->f){
        return 1;

    }
    else{
        return 0;
    }
}

int isFull(struct Queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(struct Queue *q,int val){
    if(isFull(q)){
        printf("Queue is full\n");
    }
    else{
        q->r++;
        q->arr[q->r]=val;
    }
}

int dequeue(struct Queue *q){
    int a=-1;
    if(isEmpty(q)){
        printf("Queue is Empty\n");
    }
    else{
        q->f++;
        a=q->arr[q->f];
    }
    return a;
}

int main(){
    struct Queue *q;
    q->size=100;
    q->f=q->r=-1;
    q->arr=(int *)malloc(q->size *(sizeof(int)));
    
    enqueue(&q,12);
    enqueue(q,45);
    enqueue(q,23);
    printf("Dequeuing element %d\n",dequeue(q));
    printf("Dequeuing element %d\n",dequeue(q));

    return 0;
}