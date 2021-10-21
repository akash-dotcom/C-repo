#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }

else
{
    return 0;
}
}

void push(struct stack *ptr,int val){
    if(isFull(ptr)){
       printf("Stack overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}

int pop(struct stack *ptr){
    if(isEmpty(ptr)){
       printf("Stack underflow\n");
       return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *sp,int i){
    int arrayInd=sp->top-i+1;
    if(arrayInd<0){
        printf("Not a valid position\n");
        return -1;
    }
    else{
        return sp->arr[arrayInd];
    }
}

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    //printf("Stack has been created successfully.");

    printf("%d\n",isFull(sp));
    printf("%d\n",isEmpty(sp));

    push(sp,56);
    push(sp,6);
    push(sp,16);
    push(sp,86);
    push(sp,7);
    push(sp,96);
    push(sp,1);
    push(sp,3);
    push(sp,12);
    push(sp,89);
    push(sp,156);

    printf("%d\n",isFull(sp));
    printf("%d\n",isEmpty(sp));

    for(int j=1;j<=sp->top+1;j++){
        printf("The value at position %d is %d\n",j,peek(sp,j));
    }
}