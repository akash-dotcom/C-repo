//Write a function sum vector which return the sum of two vectors 
//passed to it.The vectors must be two-dimensional


#include<stdio.h>

struct vector{
    int x;
    int y;
};

struct vector sumVector(struct vector v1,struct vector v2){
    struct vector result;
    result.x=v1.x + v2.x;
    result.y =v1.y + v2.y; 
    return result;
}


int main(){
   struct vector v1,v2,sum;
   v1.x=23;
   v1.y=54;
   printf("X dim is %d and Y dim is %d\n",v1.x,v1.y);
   v2.x=233;
   v2.y=154;
   printf("X dim is %d and Y dim is %d\n",v2.x,v2.y);

   sum = sumVector(v1,v2);
   printf("X dim of sum is %d and Y dim of sum is %d",sum.x,sum.y);
}