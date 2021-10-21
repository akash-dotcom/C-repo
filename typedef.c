#include<stdio.h>
#include<string.h>

typedef struct employee{
    int code;
    float salary;
    char name[20];
} emp;



int main(){
    //Declaring e1 and ptr
    emp e1;
    emp *ptr;

    //Pointing ptr to e1
    ptr = &e1;
    //(*ptr).code = 101; Other way to represent

    //Set the member values of e1
    ptr->code=101;
    ptr->salary=104.25;
    strcpy(ptr->name,"Akash");


}