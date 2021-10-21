#include <stdio.h>
//int N=5;
int queue[5];
int f = -1;
int r = -1;

void enqueue(int x)
{
    //if(r=4){
    //  printf("Queue is overflow\n");
    //}
    if (f == -1 && r == -1)
    {
        f = r = 0;
        queue[r] = x;
    }
    else
    {
        r++;
        queue[r] = x;
    }
}

void display()
{
    int i;
    if (r == -1 && f == -1)
    {
        printf("Queue empty\n");
    }
    else
    {
        for (i = f; i < r + 1; i++)
        {
            printf("Element %d is %d\n", i + 1, queue[i]);
        }
    }
}
void dequeue(){
    if(f==-1 && r==-1){
        printf("Underflow");
    }
    else if(f==r){
        f=r=-1;
    }
    else{
        printf("Dequeued element is %d\n",queue[f]);
        f++;
    }
}


    int main(){
        enqueue(8);
        enqueue(41);
        enqueue(85);
        enqueue(16);
        display();
        dequeue();
        display();
    }