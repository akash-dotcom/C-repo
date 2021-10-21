// Pointer is a variable that contains address of another variable
// Pointer always consumes 2 bytes in memory

#include<stdio.h>
#include<conio.h>

main(){
    int x=5,*j;
    j=&x;
    printf("%d %u\n",x,j);
    printf("%d %u \n",*j,&x);
    printf("%u",*&j); // Jab & aur * ek saath ho to dono ko cancel kr do
    }