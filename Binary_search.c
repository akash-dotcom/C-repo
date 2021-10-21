#include<stdio.h>


int binarySearch(int arr[],int size,int element){
    int low,mid,high;
    low=0;
    high=size-1;
    //Start Searching
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==element){
            return mid;
        }
        if(arr[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    //Search ends
}


int main(){
   int arr[]={1,3,5,56,64,78,96,178,215,228};
   int size = sizeof(arr)/sizeof(int);
   int element=96;
   int searchIndex=binarySearch(arr,size,element);
   printf("The element %d was found at Index %d \n",element,searchIndex);
   return 0;

}