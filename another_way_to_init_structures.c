#include<stdio.h>
#include<string.h>

struct employee {
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee workers={100,34.34,"Akash"};
    printf("Code is : %d \n",workers.code);
    printf("Salary is : %f \n",workers.salary);
    printf("Name is :%s \n",workers.name);


}