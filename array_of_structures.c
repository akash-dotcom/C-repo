#include<stdio.h>
#include<string.h>

struct employee {
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee facebook[100];
    facebook[0].code=100;
    facebook[0].salary=100.45;
    strcpy(facebook[0].name,"Akash");

    facebook[1].code=100;
    facebook[1].salary=1780.45;
    strcpy(facebook[1].name,"saini");

    facebook[2].code=100;
    facebook[2].salary=120.45;
    strcpy(facebook[2].name,"Aman");

    printf("Done");
}