#include<stdio.h>

void printArray(int *ptr,int n){
    for(int i=0;i<n;i++){
        printf("The value of element %d is %d\n",i+1,*(ptr+i));
    }
}

int main(){
    int arr[]={1,2,55,78,45,96,58};
    printArray(arr,7);
    return 0;

}