#include<stdio.h>

int linearSearch(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }

    }
    return -1;
}


int main(){
   int arr[]={1,3,5,56,4,8,96,78,15,28,9,6};
   int size = sizeof(arr)/sizeof(int);
   int element=99;
   int searchIndex=linearSearch(arr,size,element);
   printf("The element %d was found at Index %d \n",element,searchIndex);
   return 0;

}