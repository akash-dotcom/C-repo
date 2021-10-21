#include<stdio.h>
#include<conio.h>

main(){

    int x=5,*p,**q,***r;
    p=&x;
    q=&p;
    r=&q;
}

// We can add or subtract integer from/to an address
// Pointer+n=pointer +sizeof(type of pointer)*n 
// We can subtract addresses of same type.
